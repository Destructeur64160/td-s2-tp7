exe: main.o fonctions.o trislents.o
	gcc main.o fonctions.o trislents.o -o tp5
fonctions.o: fonctions.c fonctions.h
	gcc -c -Wall fonctions.c -o fonctions.o
trislents.o: trislents.c trislents.h
	gcc -c -Wall trislents.c -o trislents.o
main.o: main.c trislents.h fonctions.h
	gcc -c -Wall main.c -o main.o
clean:
	rm -f *.o
	clear