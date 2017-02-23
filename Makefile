CFLAGS = -I ./include
##LIB    = ./libggfonts.so
LFLAGS = -lrt -lX11 -lGLU -lGL -pthread -lm #-lXrandr

all: asteroids

asteroids: asteroids.cpp ppm.c log.c erickT.cpp erickH.cpp andrewP.cpp jtL.cpp 
	g++ $(CFLAGS) asteroids.cpp log.c libggfonts.a -Wall -Wextra $(LFLAGS) -o asteroids

clean:
	rm -f asteroids
	rm -f *.o

