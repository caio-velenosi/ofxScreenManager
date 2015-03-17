//
//  Screen.h
//  ofxScreenManager
//
//  Created by Caio Velenosi on 15/03/15.
//
//

#ifndef __ofxScreenManager__Screen__
#define __ofxScreenManager__Screen__

#include <stdio.h>
#include <map>

#include "ofMain.h"

class Screen {
    
public:
    virtual void setup();
    virtual void update() {};
    virtual void draw() {};
    virtual void kill();
    
    void drawEvent(ofEventArgs &args);
    void updateEvent(ofEventArgs &args);

    
private:
};

#endif /* defined(__ofxScreenManager__Screen__) */
