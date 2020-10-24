all: arraystring.o
	gcc -o test arraystring.o

arraystring.o: arraystring.c
	gcc -c arraystring.c
	
run:
	./test