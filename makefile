all: main.o list.o
	gcc -o main.out main.o list.o
	rm *.o

list.o: list.c list.h
	gcc -c list.c

main.o: main.c list.h
	gcc -c main.c

run:
	./main.out
