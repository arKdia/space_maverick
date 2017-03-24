//Author: Erick Herrera
//Starting Date: 2/21/2017
//Group:6  - Space Maverick

#include <iostream>
#include "fonts.h"
#include <GL/glx.h>
using namespace std;

void GAMEOVERSCREEN (void);
void showGAMEOVERSCREEN ();

void Maverick () {
    for (int i = 0; i < 10; i++) {
	    cout << "mavERICK";
	    cout << "\n";
    }
}


void Maverick2 (int yres) {
    char name[10] = {"mavERICK"};

    Rect maverick;
    glEnable(GL_TEXTURE_2D);

    maverick.bot = yres/11;
    maverick.left = 850;
    maverick.center = 0;
    ggprint16(&maverick, 0, 0x00ffffff, name);
}

void MaverickHealth (float health) {
	glBegin(GL_QUADS);
	glColor3f(1, 0, 0);
	glVertex2f(0, 0);
	glVertex2f(1, 0);
	glVertex2f(2, 0);
	glVertex2f(3, 0);
	glVertex2f(4, 0);
	glVertex2f(5, 0);
	glVertex2f(1, health);
	glVertex2f(0, health);
	glEnd();
}

struct BACKGROUNDIMAGE {
	int x;
	int y;
	char *image;
} BACKGROUNDIMAGE;
    
void GAMEOVERSCREEN (void) {
	glEnable(GL_TEXTURE_2D);
//	loadTexture("images/gameover.png");
}

void showGAMEOVERSCREEN () {


}
