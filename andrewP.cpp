//Andrew Parker
//March 2, 2017
//Group 6 - Lab 5
//
//
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <unistd.h>
#include <time.h>
//#include <math.h>
#include <fcntl.h>
#include <sys/stat.h>
//#include <x11/Xlib.h>
//#include <X11/keysym.h>
#include </usr/include/AL/alut.h>
#include <GL/glx.h>
#include "fonts.h"

using namespace std;

void backGround();
void playBackGround(ALuint);

int music = 0;
ALuint alBuffer[1];
ALuint alSource[1];
void help(int yres)
{
    char text[3][60] = {"Use space to shoot.", 
	                    "Use up arrow key for thrust.",
                        "Use left and right arrow keys to change direction."};

    Rect re;
    glEnable(GL_TEXTURE_2D);

    re.bot = yres / 11;
    re.left = 10;
    re.center = 0;

    for (int i = 0; i < 3; i++) {
	    ggprint16 (&re, 0, 0x00aaff00, text[i]);
	    re.bot = re.bot - 30;
    }
}

void backGround()
{
    if (music == 0) {
    	alutInit(0, NULL);
    	if (alGetError() != AL_NO_ERROR) {
		cout << "ERROR: alutInit()\n";
		return;
    	}
    	alGetError();

    	float vec[6] = {0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 0.0f};
    	alListener3f(AL_POSITION, 0.0f, 0.0f, 0.0f);
    	alListenerfv(AL_ORIENTATION, vec);
    	alListenerf(AL_GAIN, 1.0f);

    	//ALuint alBuffer[1];

    	alBuffer[0] = alutCreateBufferFromFile("ninja.wav");

    	//ALuint alSource[1];
    	alGenSources(1, alSource);
    	alSourcei(alSource[0], AL_BUFFER, alBuffer[0]);
    
    	alSourcef(alSource[0], AL_GAIN, 1.0f);
    	alSourcef(alSource[0], AL_PITCH, 1.0f);
    	alSourcef(alSource[0], AL_LOOPING, AL_FALSE);
    
    	if (alGetError() != AL_NO_ERROR) {
		cout << "ERROR: setting source\n";
		return;
    	}
	music ^= 1;
    	playBackGround(alSource[0]);
    } else {
    alDeleteSources(1, &alSource[0]);
    alDeleteBuffers(1, &alBuffer[0]);
	
    ALCcontext *Context = alcGetCurrentContext();
    ALCdevice *Device = alcGetContextsDevice(Context);
    alcMakeContextCurrent(NULL);
    alcDestroyContext(Context);
    alcCloseDevice(Device);
    return;
    }
}
	
void playBackGround(ALuint source)
{
    //for (int i=0; i < 42; i++) {
	alSourcePlay(source);
//	usleep(500000);
  //  }
    return;
}
