#TODO

CFLAGS = -Wall
LDFLAGS = -O3

SRC=$(wildcard *.c)

OBJEKTI = izlaz.o ispis/ispis.o datoteka/datoteka.o

compile_izlaz: $(SRC)
	cd datoteka && $(MAKE) compile 
	cd ispis && $(MAKE) compile
	gcc -c $^ $(CFLAGS)
	ld -relocatable $(OBJEKTI) -o izlaz-obj.o

clean: 
	rm -f *.o
	cd datoteka && $(MAKE) clean
	cd ispis && $(MAKE) clean