#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;
/**using namespace std;
const int width = 80;
const int height = 40;
bool newMap;
bool menuOpened;
int x, y;
int xboundries[6];
int yboundries[6];
char CharInput;
char userCharacter = 'M';

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



    /**}
    if ((x == (width / 2) + 1 && y == height) || (x == width / 2 && y == height))
    {
        newMap = true;
    }
}


*/
