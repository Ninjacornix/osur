#TODO

CFLAGS = -Wall
LDFLAGS = -O3

SRC=$(wildcard *.c)

OBJEKTI = izlaz.o datoteka/datoteka.o

compile_izlaz: $(SRC)
	cd datoteka && $(MAKE) compile 
	gcc -c $^ $(CFLAGS)
	ld -relocatable $(OBJEKTI) -o izlaz-obj.o

clean: 
	rm -f *.o
	cd datoteka && $(MAKE) clean