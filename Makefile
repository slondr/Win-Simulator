C = gcc
FLAGS = -lncurses -Wall

build:
	$(C) -c win.c
	$(C) -c main.c
	$(C) -o win main.o win.o $(FLAGS)

wasm:
	emcc -c win.c
	emcc -c main.c
	emcc -o win.html -s WASM=1 main.o win.o $(FLAGS)

clean:
	rm -f win
	rm -f *.o
