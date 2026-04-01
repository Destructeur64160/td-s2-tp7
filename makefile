exe: main.o fonctions.o trislents.o trisrapides.o
	gcc main.o fonctions.o trislents.o trisrapides.o -o tp6

fonctions.o: fonctions.c fonctions.h
	gcc -c -Wall fonctions.c -o fonctions.o

trislents.o: trislents.c trislents.h
	gcc -c -Wall trislents.c -o trislents.o

trisrapides.o: trisrapides.c trisrapides.h
	gcc -c -Wall trisrapides.c -o trisrapides.o

main.o: main.c trislents.h fonctions.h trisrapides.h
	gcc -c -Wall main.c -o main.o

clean:
	rm -f *.o
	clear
