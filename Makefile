CC = gcc

.PHONY: all default clean

default: myecho

all: myecho myenv isset myfork

myecho: myecho.c

myenv: myenv.c

isset: isset.c

myfork: myfork.c

clean:
	rm -f myecho
