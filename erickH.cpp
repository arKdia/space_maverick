//Author: Erick Herrera
//Starting Date: 2/21/2017
//Group:6  - Space Maverick

#include <iostream>
#include "fonts.h"
#include <GL/glx.h>
using namespace std;

void Maverick () {
    for (int i = 0; i < 10; i++) {
	    cout << "mavERICK";
	    cout << "\n";
    }
}


void Maverick2 () {
    char name[10] = {"mavERICK"};

    Rect maverick;
    glEnable(GL_TEXTURE_2D);

    maverick.bot = yres - 820;
    maverick.left = 10;
    maverick.center = 0;
}
