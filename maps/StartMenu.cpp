#include "StartMenu.h"
#include "InputConfig.h"
#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

StartMenu::StartMenu()
{
    TitlePrint();
}

void StartMenu::TitlePrint() {

    cout << "    _/      _/                      _/                _/_/_/    _/_/_/      _/_/_/ \n";
    cout << "   _/_/  _/_/    _/_/_/  _/  _/_/        _/_/        _/    _/  _/    _/  _/        \n";
    cout << "  _/  _/  _/  _/    _/  _/_/      _/  _/    _/      _/_/_/    _/_/_/    _/  _/_/   \n";
    cout << " _/      _/  _/    _/  _/        _/  _/    _/      _/    _/  _/        _/    _/    \n";
    cout << "_/      _/    _/_/_/  _/        _/    _/_/        _/    _/  _/          _/_/_/     \n";

    cout << "\nPress 'Enter' to Start";
}

bool StartMenu::GetTitleScreenStatus()
{
    return titleScreen;
}

void StartMenu::SetTitleScreenStatus()
{
    titleScreen = false;
}
