#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;
const int width = 80;
const int height = 40;
bool newMap;
bool menuOpened;
bool run = false;
int x, y;
int xboundries[6];
int yboundries[6];
char CharInput;
char userCharacter = 'M';
enum eInputs { STOP = 0, LEFT, RUN_LEFT, RIGHT, RUN_RIGHT, UP, RUN_UP, DOWN, RUN_DOWN, MENU };
eInputs userInput;
// functions
void DesertSetup();

void DesertMap();

void UserInput();

void InputLogic();

int main()
{
    DesertSetup();
    while (!newMap)
    {
        DesertMap();
        UserInput();
        InputLogic();
    }





    return 0;
}

void DesertSetup()
{
    newMap = false;
    userInput = STOP;
    x = width / 2;
    y = height - 1;
}

void DesertMap()
{
    system("cls");
    for (int i = 0; i < width; i++)
    {
        cout << "#";
    }

    cout << "\n";

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {


            if (j == 0 || j == (width - 1))
            {
                cout << "#";
            }
            else if (i == y && j == x)
            {
                cout << userCharacter;
            }

            else
            {
                cout << " ";
            }

        }
        cout << "\n";
    }

    for (int i = 0; i < width; i++)
    {
        if (i == width / 2 || i == (width / 2) + 1)
        {
            cout << "_";
        }
        else
        {
            cout << "#";
        }
    }
    Sleep(250);
}

void UserInput()
{
    if (_kbhit())
    {
        switch (_getch())
        {
        case 'a':
            userInput = LEFT;
            break;
        case 'A':
            userInput = RUN_LEFT;
            break;

        case 'd':
            userInput = RIGHT;
            break;

        case 'D':
            userInput = RUN_RIGHT;
            break;

        case 'w':
            userInput = UP;
            break;

        case 'W':
            userInput = RUN_UP;
            break;

        case 's':
            userInput = DOWN;
            break;

        case 'S':
            userInput = RUN_DOWN;
            break;
        case ' ':
            userInput = STOP;
            menuOpened = true;
            break;
        }
    }
    else
    {
        userInput = STOP;
    }

}

void InputLogic()
{
    switch (userInput)
    {

    case LEFT:
            x--;
        break;

    case RUN_LEFT:
       x -= 4;
       break;

    case RIGHT:
        x++;
        break;

    case RUN_RIGHT:
        x += 4;
        break;


    case UP:
        y--;
        break;

    case RUN_UP:
            y -= 2;
            break;

    case DOWN:
        y++;
        break;

    case RUN_DOWN:
            y += 2;
            break;

    case STOP:
        x = x;
        y = y;
        run = false;
        break;
    default:
        break;

    }
    if ((x == (width / 2) + 1 && y == height) || (x == width / 2 && y == height))
    {
        newMap = true;
    }
}



