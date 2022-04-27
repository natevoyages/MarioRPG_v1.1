#ifndef INPUTCONFIG_H
#define INPUTCONFIG_H

class InputConfig
{
public:
    InputConfig();

    void UserInput();

    void GamePlayInputLogic(int& x, int& y) const;

    void StartMenuInputLogic(int numMenuOptions) const;

private:
    char leftChar;
    char rightChar;
    char upChar;
    char downChar;

    char runLeftChar;
    char runRightChar;
    char runUpChar;
    char runDownChar;
    bool menuOpened;

    int userInput;

    const int STOP = 0;

    const int LEFT = 1;
    const int RIGHT = 2;
    const int UP = 3;
    const int DOWN = 4;
    const int RUN_LEFT = 5;
    const int RUN_RIGHT = 6;
    const int RUN_UP = 7;
    const int RUN_DOWN = 8;

    const int ENTER = 9;
    

};

#endif