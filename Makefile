CFLAGS = -I ./include
##LIB    = ./libggfonts.so
LFLAGS = -lrt -lX11 -lGLU -lGL -pthread -lm #-lXrandr

all: space_maverick

space_maverick: space_maverick.cpp ppm.c log.c 
	g++ $(CFLAGS) space_maverick.cpp erickT.cpp erickH.cpp andrewP.cpp jtL.cpp log.c libggfonts.a -Wall -Wextra $(LFLAGS) -o mavERICK

clean:
	rm -f mavERICK
	rm -f *.o
	rm -f *.out


