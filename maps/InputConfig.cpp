#include "InputConfig.h"
#include <conio.h>
#include <windows.h>

using namespace std;

InputConfig::InputConfig() 
{
    leftChar = 'a';
    rightChar = 'd';
    upChar = 'w';
    downChar = 's';

    runLeftChar = 'A';
    runRightChar = 'D';
    runUpChar = 'W';
    runDownChar = 'S';

    enterChar = '\n';

    menuOpened = false;

}


void InputConfig::UserInput()
{
    
    if (_kbhit())
    {
        if (_getch() == leftChar)
        {
            userInput = LEFT;
        }

        else if (_getch() == runLeftChar)
        {
            userInput = RUN_LEFT;
        }

        else if (_getch() == rightChar)
        {
            userInput = RIGHT;
        }

        else if (_getch() == runRightChar)
        {
            userInput = RUN_RIGHT;
        }

        else if (_getch() == upChar)
        {
            userInput = UP;
        }

        else if (_getch() == runUpChar)
        {
            userInput = RUN_UP;
        }

        else if (_getch() == downChar)
        {
            userInput = DOWN;
        }

        else if (_getch() == runDownChar)
        {
            userInput = RUN_DOWN;
        }

        else if (_getch() == ' ')
        {
            userInput = STOP;
            menuOpened = true;
        }
        else if (_getch() == enterChar) 
        {
            userInput = ENTER;
        }
    }
    else
    {
        userInput = STOP;
    }
}


 void InputConfig::GamePlayInputLogic(int& x, int& y) const
 {
     switch (userInput)
     {

     case 1:
         x--;
         break;

     case 5:
         x -= 4;
         break;

     case 2:
         x++;
         break;

     case 6:
         x += 4;
         break;


     case 3:
         y--;
         break;

     case 7:
         y -= 2;
         break;

     case 4:
         y++;
         break;

     case 8:
         y += 2;
         break;

         //case 9:
     case 0:
         x = x;
         y = y;
         break;
     default:
         break;

     }
 }

 void InputConfig::StartMenuInputLogic( int numMenuOptions) const
 {
     int y = 0;
     switch (userInput)
     {
     case 3:
         if (y != 0)
         {
             y--;
             break;
         }

     case 4:
         if (y != numMenuOptions - 1)
         {
             y++;
             break;
         }
     case 9:
     if(startMenu.Get = true)

     case 0:
         y = y;
         break;
     default:
         break;
     }
 }
