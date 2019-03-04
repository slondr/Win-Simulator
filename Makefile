C = gcc
FLAGS = -lncurses
OBJS = win.o main.o
SRCS = $(OBJS, .o=.c) #!!!

all: $(OBJS)
	$(C) -c $^
%.o : %.c
	$(C) -c $<

$(SRCS) : win.h

clean:
	rm -f win
