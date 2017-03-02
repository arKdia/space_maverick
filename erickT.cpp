//needs: xres, yres
#include "fonts.h"
#include <GL/glx.h>


void menu(char input[], int size) {
  Rect m;
  int loc[2] = {0};
  int xres = 1250;
  int yres = 900;

  glColor3f(1.0,0.0,0.0); // for each color highest = 1, lowest 0;
  int cx = xres / 2;
  int cy = yres / 2;

  glBegin(GL_QUADS);
    glVertex2i(cx-100, cy+100);
    glVertex2i(cx+100, cy+100);
    glVertex2i(cx+100, cy-100);
    glVertex2i(cx-100, cy-100);
  glEnd();

  glEnable(GL_TEXTURE_2D);
  m.bot = cy + 20;
  m.left = cx;
  m.center = 1;

  ggprint8b(&m, 16,  0x00ffff00, "This is the Menu");
  ggprint8b(&m, 16, 0, "This is the first option");

  //=============> INPUT BOX
  glDisable(GL_TEXTURE_2D);
  glColor3f(1.0,1.0,0.0);

  cx = loc[0] + cx - 100;
  cy = loc[1] + cy - 40;

  glBegin(GL_QUADS);
    glVertex2i(cx, cy);                 //1 lower left corner
    glVertex2i(cx, cy+16);              //2 upper left  "
    glVertex2i(cx + size*12, cy + 16);   //3 upper right "
    glVertex2i(cx + size*12, cy);        //4 lower right "
  glEnd();

  glEnable(GL_TEXTURE_2D);
  m.bot = cy;
  m.left = cx;
  m.center = 0;
  ggprint8b(&m, 16,  0x00000000, input);
  //==========end box
  //


}

