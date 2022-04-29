#ifndef STARTMENU_H
#define STARTMENU_H

#include "InputConfig.h"
#include <iostream>
#include <conio.h>
#include <windows.h>
#include <vector>


class StartMenu
{
public:

	StartMenu();

	void TitlePrint();

	//void PrintStartMenu(vector<string>& menuOptions); //fix me

	void TitleScreen();

	void TitleMenu();
private:
	int yMenu;
	int numOptions;
	bool titleScreen;
	bool titleMenu;
	bool select;
	InputConfig input;
};
#endif