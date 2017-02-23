CFLAGS = -I ./include
##LIB    = ./libggfonts.so
LFLAGS = -lrt -lX11 -lGLU -lGL -pthread -lm #-lXrandr

all: asteroids

asteroids: asteroids.cpp erickH.cpp ppm.c log.c fonts.h
	g++ $(CFLAGS) asteroids.cpp erickH.cpp log.c fonts.h libggfonts.a -Wall -Wextra $(LFLAGS) -o asteroids

clean:
	rm -f asteroids
	rm -f *.o

