C = gcc
FLAGS = -lncurses
OBJS = win.o main.o
SRCS = $(OBJS, .o=.c) #!!!

all:
	gcc -c win.c
	gcc -c main.c
	gcc -o win main.o win.o -lncurses

clean:
	rm -f win
	rm -f *.o
