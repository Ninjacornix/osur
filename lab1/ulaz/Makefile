#TODO

CFLAGS = -Wall
LDFLAGS = -O3

SRC=$(wildcard *.c)

OBJEKTI = ulaz.o datoteka/datoteka.o generator/generator.o tipkovnica/tipkovnica.o

compile_ulaz: $(SRC)
	cd datoteka && $(MAKE) compile 
	cd generator && $(MAKE) compile
	cd tipkovnica && $(MAKE) compile
	gcc -c $^ $(CFLAGS)
	ld -relocatable $(OBJEKTI) -o ulaz-obj.o

clean:
	cd datoteka && $(MAKE) clean
	cd generator && $(MAKE) clean
	cd tipkovnica && $(MAKE) clean
	rm -f *.o