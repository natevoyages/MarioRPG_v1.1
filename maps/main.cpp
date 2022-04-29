#include "InGameMenu.h"
#include "InputConfig.h"
#include "StartMenu.h"
#include <iostream>
#include <conio.h>
#include <windows.h>
#include <vector>
using namespace std; // this may be polluting the global namespace

int main()
{
	bool play = true;
	//vector <string> menuOptions(3);  //fix me
	//menuOptions[0] = "New Game ";    //fix me
	//menuOptions[1] = "Quit     ";    //fix me
	//menuOptions[2] = "Resume   ";    //fix me issue with vectors and arrays
	StartMenu start;
	
	while (play)
	{
		start.TitleScreen();
		play = false; // just to test that the app closes
	}
	return 0;
}


