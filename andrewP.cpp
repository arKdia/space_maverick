//Andrew Parker
//March 2, 2017
//Group 6 - Lab 5
//
//
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <unistd.h>
//#include <x11/Xlib.h>
//#include <X11/keysym.h>
#include <GL/glx.h>
#include "fonts.h"

using namespace std;

void help(int yres)
{
    char text[3][60] = {"Use space to shoot.", 
	"Use up arrow key for thrust.",
        "Use left and right arrow keys to change direction."};
    Rect re;
    glEnable(GL_TEXTURE_2D);

    re.bot = yres - 820;
    re.left = 10;
    re.center = 0;

    for (int i = 0; i < 3; i++) {
	ggprint16 (&re, 0, 0x00aaff00, text[i]);
	re.bot = re.bot - 30;
    }
}

