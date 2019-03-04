C = gcc
FLAGS = -lncurses

all:
	$(C) -c win.c
	$(C) -c main.c
	$(C) -o win main.o win.o $(FLAGS)

clean:
	rm -f win
	rm -f *.o
