ListaNodi.o: main.o nodo.o
	 gcc -g -o ListaNodi main.o nodo.o

main.o: main.c nodo.o
	 gcc -g -c main.c

nodo.o: nodo.c nodo.h
	 gcc -g -c nodo.c