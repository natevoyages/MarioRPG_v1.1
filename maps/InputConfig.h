#ifndef INPUTCONFIG_H
#define INPUTCONFIG_H

class InputConfig
{
public:
    void UserInput();

    void TitleScreenInput(bool& titleScreen);

    void GamePlayInputLogic(int& x, int& y) const;

    void StartMenuInputLogic( int& yMenu, int numMenuOptions, bool& select, bool& titleMenu);



private:

    enum eInputs {STOP = 0, LEFT, RIGHT, UP, DOWN, RUN_LEFT, RUN_RIGHT, RUN_UP, RUN_DOWN, ENTER};
    eInputs userInput;
};

#endif