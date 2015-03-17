//
//  ScreenA.h
//  ScreenManagerTest
//
//  Created by Caio Velenosi on 17/03/15.
//
//

#ifndef __ScreenManagerTest__ScreenA__
#define __ScreenManagerTest__ScreenA__

#include <stdio.h>
#include "Screen.h"
#include "ScreenB.h"
#include "ScreenManager.h"

class ScreenA : public Screen {
    
public:
    void setup();
    void draw();
    void kill();
    
    void keyPress(ofKeyEventArgs &args);
};

#endif /* defined(__ScreenManagerTest__ScreenA__) */
