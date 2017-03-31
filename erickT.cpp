//needs: xres, yres
#include "fonts.h"
#include <GL/glx.h>
#include <GL/glu.h>

void menu(char input[], int size) {
  Rect m;
  int loc[2] = {0};
  int xres = 1250;
  int yres = 900;

  int cx = xres / 2;
  int cy = yres / 2;

  glEnable(GL_BLEND);
  glBindTexture(GL_TEXTURE_2D, 0);
  glBlendFunc(GL_SRC_ALPHA, GL_ONE);

  //glLineWidth(1);
  
/*======>> Buttons <<======*/
  //glColor3f(0.0,0.0,1.0); 
//===>Menu title
  glBegin(GL_POLYGON);  
   glColor3f(0.0, 0.0, 0.0); 
   glVertex2i(cx + 20 ,   cy + 110);
   glVertex2i(cx + 113,   cy + 110);  //right 
   glVertex2i(cx + 115,   cy + 110);  //right top
   glColor3f(1.0, 1.0, 1.0); 
   glVertex2i(cx + 115,   cy + 80);   //right bottom
   glVertex2i(cx - 20 ,   cy + 80);    //down-right " ''\,, "
   glVertex2i(cx - 40 ,   cy + 90);    //down-left " ''\,, "
   glVertex2i(cx - 130,   cy + 90);   //left bottom
   glColor3f(0.0, 0.1, 0.7); 
   glVertex2i(cx - 135,   cy + 80);   //left pick
   glVertex2i(cx - 135,   cy + 120);  //left top
   glVertex2i(cx    ,   cy + 120);      //top " ``\,, "
  glEnd();
//===>Play ]]===
  glBegin(GL_POLYGON);
     glVertex2i(cx - 20 , cy + 70);  
     glVertex2i(cx - 40 , cy + 80);  
     glVertex2i(cx - 130, cy + 80); //left up
     glVertex2i(cx - 130, cy + 60); //left down  
     glVertex2i(cx - 120, cy + 50); //left down  
     glVertex2i(cx - 40 , cy + 50);  
     glVertex2i(cx - 20 , cy + 60);  
     glVertex2i(cx + 115, cy + 60);  
     glVertex2i(cx + 115, cy + 70);  
  glEnd();

//===>Settings ===[[
  glBegin(GL_POLYGON);
     glVertex2i(cx - 40 , cy + 40);  
     glVertex2i(cx - 20 , cy + 50);  
     glVertex2i(cx + 115, cy + 50); //right-up 
     glVertex2i(cx + 115, cy + 30); //right-down
     glVertex2i(cx + 105, cy + 20);  
     glVertex2i(cx - 20 , cy + 20);  
     glVertex2i(cx - 40 , cy + 30);  
     glVertex2i(cx - 130, cy + 30);  
     glVertex2i(cx - 130, cy + 40);  
  glEnd();

//===>High Scores ]]===
  glBegin(GL_POLYGON);
     glVertex2i(cx - 20 , cy + 10);  
     glVertex2i(cx - 40 , cy + 20);  
     glVertex2i(cx - 130, cy + 20); //left up
     glVertex2i(cx - 130, cy + 0); //left down  
     glVertex2i(cx - 120, cy - 10); //left down  
     glVertex2i(cx - 40 , cy - 10);  
     glVertex2i(cx - 20 , cy + 0);  
     glVertex2i(cx + 115, cy + 0);  
     glVertex2i(cx + 115, cy + 10);  
  glEnd();

//===>Credits ===[[
  glBegin(GL_POLYGON);
     glVertex2i(cx - 40 , cy - 20);  
     glVertex2i(cx - 20 , cy - 10);  
     glVertex2i(cx + 115, cy - 10); //right-up 
     glVertex2i(cx + 115, cy - 30); //right-down
     glVertex2i(cx + 105, cy - 40);  
     glVertex2i(cx - 20 , cy - 40);  
     glVertex2i(cx - 40 , cy - 30);  
     glVertex2i(cx - 130, cy - 30);  
     glVertex2i(cx - 130, cy - 20);  
  glEnd();

  //===>End-Menu title
  glBegin(GL_POLYGON);  
   glColor3f(0.0, 0.0, 0.0); 
   glVertex2i(cx-20 ,   cy-50);
   glVertex2i(cx+115,   cy-50);  //right top
   glColor3f(1.0, 1.0, 1.0); 
   glVertex2i(cx+115,   cy-70);  //right bottom
   glVertex2i(cx-50 ,   cy-70);  //down-right " ''\,, "
   glColor3f(0.0, 0.1, 0.7); 
   glVertex2i(cx-70 ,   cy-60);  //down-left " ''\,, "
   glVertex2i(cx-130,   cy-60);  //left bottom
   glVertex2i(cx-135,   cy-70);  //left pick
   glVertex2i(cx-135,   cy-40);  //left top
   glVertex2i(cx-40 ,   cy-40);  //top " ``\,, "
  glEnd();
  
  glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
  glDisable(GL_BLEND);

  glEnable(GL_TEXTURE_2D);
  m.bot = cy + 77;
  m.left = cx-20;
  m.center = 0;
  ggprint17(&m, 0,  0x0000000, "MAIN MENU");
  
  m.bot = cy + 47;
  m.left = cx-110;
  m.center = 0;
  ggprint17(&m, 0,  0x0000000, "PLAY");

  m.bot = cy + 17;
  m.left = cx-20;
  m.center = 0;
  ggprint17(&m, 0,  0x0000000, "SETTINGS");
  
  m.bot = cy - 13;
  m.left = cx-121;
  m.center = 0;
  ggprint17(&m, 0,  0x0000000, "SCORES");
  
  m.bot = cy - 43;
  m.left = cx-20;
  m.center = 0;
  ggprint17(&m, 0,  0x0000000, "CREDITS");
  
  glDisable(GL_TEXTURE_2D);
//======>>End Menu 
//=============> INPUT BOX

  glColor3f(1.0,1.0,0.0);

  cx = loc[0] + cx - 100;
  cy = loc[1] + cy - 40;

  glBegin(GL_QUADS);
    glVertex2i(cx, cy+163);                 //1 lower left corner
    glVertex2i(cx, cy+179);              //2 upper left  "
    glVertex2i(cx + size*12, cy+179);  //3 upper right "
    glVertex2i(cx + size*12, cy+163);       //4 lower right "
  glEnd();

  glEnable(GL_TEXTURE_2D);
  m.bot = cy+163;
  m.left = cx;
  m.center = 0;
  ggprint8b(&m, 16,  0x00000000, input);

  //==========end box

 // glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
 // glDisable(GL_BLEND);

}

