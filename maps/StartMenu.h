#ifndef STARTMENU_H
#define STARTMENU_H
#include <iostream>
#include <conio.h>
#include <windows.h>
class StartMenu
{
public:

	StartMenu();

	void TitlePrint();

	bool GetTitleScreenStatus();

	void SetTitleScreenStatus();

private:

	bool titleScreen = true;
};
#endif