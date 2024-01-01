CC = cc
XFLAGS = -Wall -Wextra -pedantic
IFLAGS = ./raylib/build/raylib/include
LFLAGS = ./raylib/build/raylib

hello:
	cc -g $(XFLAGS) -I$(IFLAGS) -o hello hello.c -lraylib -L$(LFLAGS) -lm
