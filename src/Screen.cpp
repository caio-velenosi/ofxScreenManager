//
//  Screen.cpp
//  ofxScreenManager
//
//  Created by Caio Velenosi on 15/03/15.
//
//

#include "Screen.h"

void Screen::setup()
{
    ofAddListener(ofEvents().draw, this, &Screen::drawEvent);
    ofAddListener(ofEvents().update, this, &Screen::updateEvent);
}

void Screen::drawEvent(ofEventArgs &args)
{
    draw();
}

void Screen::updateEvent(ofEventArgs &args)
{
    update();
}

void Screen::kill()
{
    ofRemoveListener(ofEvents().draw, this, &Screen::drawEvent);
    ofRemoveListener(ofEvents().update, this, &Screen::updateEvent);
    
    delete this;
}