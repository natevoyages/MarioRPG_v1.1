#include "InGameMenu.h"
#include "InputConfig.h"
#include "StartMenu.h"
#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

int main()
{
	InputConfig standardConfig = InputConfig();

	while () {
		system("cls");
		StartMenu();
		standardConfig.UserInput();
		if (standardConfig.GetUserInput() == 9) {
			titleScreen = false;
			cout <<
		}
	}
	return 0;
}


