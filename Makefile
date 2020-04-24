
final: screen.o main.o
	gcc -o test screen.o main.o
screen.o: screen.c screen.h
	gcc -c screen.c screen.h
main.o: main.c screen.h
	gcc -c main.c screen.h
remove: 
	rm screen.o main.o test
