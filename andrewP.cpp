//Andrew Parker
//February 23, 2017
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

int help(int h, int WINDOW_HEIGHT)
{
    char text[3][50] = {"use space to shoot.", "use up key for thrust.",
        "use left and right keys to change direction."};
    Rect re;
    if (h == 0) {
        h = 1;
        re.bot = WINDOW_HEIGHT - 150;
        re.left = 50;
        re.center = 0;
        ggprint16 (&re, 0, 0xffffffff, text[0]);
        re.bot = WINDOW_HEIGHT - 180;
        ggprint16 (&re, 0, 0xffffffff, text[1]);
        re.bot = WINDOW_HEIGHT - 210;
        ggprint16 (&re, 0, 0xffffffff, text[2]);
        return h;
    }
    else {
        re.bot = WINDOW_HEIGHT + 20;
        re.left = 50;
        re.center = 0;
        char text[3][50] = {"Use space to shoot.", "Use up key for thrust.",
            "Use left and right keys to change direction."};
        ggprint16 (&re, 0, 0xffffffff, text[0]);
        ggprint16 (&re, 0, 0xffffffff, text[1]);
        ggprint16 (&re, 0, 0xffffffff, text[2]);
        h = 0;
        return h;
    }
}

