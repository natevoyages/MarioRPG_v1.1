#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;
const int width = 30;
const int height = 20;
bool newMap;
int x, y;
char CharInput;
char userCharacter = 'M';
enum eInputs { STOP = 0, LEFT, RIGHT, UP, DOWN, MENU };
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
    moveDir = STOP;
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
}

void UserInput()
{
    if (_kbhit())
    {
        switch (_getch())
        {
        case 'a':
            moveDir = LEFT;
            break;

        case 'd':
            moveDir = RIGHT;
            break;

        case 'w':
            moveDir = UP;
            break;

        case 's':
            moveDir = DOWN;
            break;
        case ' ':
            menuOpened = true;
            break;
        }
    }
    else
    {
        moveDir = STOP;
    }

}

void InputLogic()
{
    switch (moveDir)
    {

    case LEFT:
        if (x == 1 && y != 4)
        {
            x = 0;
        }
        else 
        {
            x--;
            break;
        }

    case RIGHT:
        x++;
        break;

    case UP:
        y--;
        break;

    case DOWN:
        y++;
        break;
    case STOP:
        x = x;
        y = y;
        break;
    default:
        break;

    }
    if ((x == (width / 2) + 1 && y == height) || (x == width / 2 && y == height))
    {
        newMap = true;
    }
}



