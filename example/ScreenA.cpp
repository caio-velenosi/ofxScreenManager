//
//  ScreenA.cpp
//  ScreenManagerTest
//
//  Created by Caio Velenosi on 17/03/15.
//
//

#include "ScreenA.h"

void ScreenA::setup()
{
    Screen::setup();
    
    ofAddListener(ofEvents().keyPressed, this, &ScreenA::keyPress);
}

void ScreenA::draw()
{
    ofBackground(255, 0, 0);
}

void ScreenA::keyPress(ofKeyEventArgs &args)
{
    if (args.key == 'n')
    {
        ScreenManager::showScreen(new ScreenB());
    }
}

void ScreenA::kill()
{
    ofRemoveListener(ofEvents().keyPressed, this, &ScreenA::keyPress);
    
    Screen::kill();
}