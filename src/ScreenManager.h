//
//  ScreenManager.h
//  ofxScreenManager
//
//  Created by Caio Velenosi on 15/03/15.
//
//

#ifndef __ofxScreenManager__ScreenManager__
#define __ofxScreenManager__ScreenManager__

#include <stdio.h>
#include "Screen.h"

class ScreenManager {
    
public:
    static void showScreen(Screen* screen);
    
    static Screen* getCurrentScreen();
    
    static Screen* currentScreen;
    
private:
    
    
};

#endif /* defined(__ofxScreenManager__ScreenManager__) */
