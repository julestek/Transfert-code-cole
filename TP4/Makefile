main.o: main.c module.h
	gcc -c main.c
module.o:module.c module.h
	gcc -c module.c
exe: module.o main.o
	gcc main.o module.o -o exe