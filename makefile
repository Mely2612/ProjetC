all: main

main: main.o fonctions.o
	gcc fonctions.o main.c -o main

fonctions.o: fonctions.c fonctions.h
	gcc -c fonctions.c

clean:
	rm *.o