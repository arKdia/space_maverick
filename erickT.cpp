//needs: xres, yres
#include "fonts.h"

void menu(void) {
    
  //glClearColor(1.0, 1.0, 1.0, 1.0);
  //glClearColor(GL_COLOR_BUFFER_BIT);
  //glDisable(Gl_TEXTURE_2D);
  //glBindTexture(GL_TEXTURE_2D, 0);

  Rect m;

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

 // glEnable(GL_TEXTURE_2D);

}

