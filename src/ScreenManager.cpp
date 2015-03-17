//
//  ScreenManager.cpp
//  ofxScreenManager
//
//  Created by Caio Velenosi on 15/03/15.
//
//

#include "ScreenManager.h"

Screen* ScreenManager::currentScreen;

void ScreenManager::showScreen(Screen *screen)
{
    if (currentScreen)
    {
        currentScreen->kill();
    }
    
    currentScreen = screen;
    currentScreen->setup();
}

Screen* ScreenManager::getCurrentScreen()
{
    return currentScreen;
}