#include "StartMenu.h"
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <vector>

using namespace std;

StartMenu::StartMenu()
{
    titleScreen = true;
    titleMenu = true;
    select = false;
    yMenu = 0;
    numOptions = 2;
}

void StartMenu::TitlePrint() {

    cout << "    _/      _/                      _/                _/_/_/    _/_/_/      _/_/_/ \n";
    cout << "   _/_/  _/_/    _/_/_/  _/  _/_/        _/_/        _/    _/  _/    _/  _/        \n";
    cout << "  _/  _/  _/  _/    _/  _/_/      _/  _/    _/      _/_/_/    _/_/_/    _/  _/_/   \n";
    cout << " _/      _/  _/    _/  _/        _/  _/    _/      _/    _/  _/        _/    _/    \n";
    cout << "_/      _/    _/_/_/  _/        _/    _/_/        _/    _/  _/          _/_/_/     \n";

    cout << "\n         Press 'Space' to Start";
}

void StartMenu::PrintStartMenu(vector<string>& menuOptions) //fix me
{
    cout << "    _/      _/                      _/                _/_/_/    _/_/_/      _/_/_/ \n";
    cout << "   _/_/  _/_/    _/_/_/  _/  _/_/        _/_/        _/    _/  _/    _/  _/        \n";
    cout << "  _/  _/  _/  _/    _/  _/_/      _/  _/    _/      _/_/_/    _/_/_/    _/  _/_/   \n";
    cout << " _/      _/  _/    _/  _/        _/  _/    _/      _/    _/  _/        _/    _/    \n";
    cout << "_/      _/    _/_/_/  _/        _/    _/_/        _/    _/  _/          _/_/_/     \n\n";

    for (int i = 0; i < sizeof(menuOptions) - 1; i++) { //fix me
        cout << menuOptions[i];
        if ((yMenu == 0 && i == 0) || (yMenu == 1 && i == 1))
        {
            cout << "[*]\n";
        }
        else
        {
            cout << "[ ]\n";
        }

    }
}

void StartMenu::TitleMenu()
{
    while (titleMenu)
    {
        system("cls");
        // add save option 
        PrintStartMenu(vector<string> menuOptions);
        input.StartMenuInputLogic(yMenu, numOptions, select,titleMenu);

    }
}

void StartMenu::TitleScreen() 
{
    while (titleScreen)
    {
        {
            system("cls");
            TitlePrint();
            input.TitleScreenInput(titleScreen);
        }
    }
}