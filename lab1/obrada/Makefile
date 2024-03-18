#TODO

CFLAGS = -Wall
LDFLAGS = -O3

SRC=$(wildcard *.c)

OBJEKTI = obrada.o smisao/smisao-obj.o pobroji/pobroji.o

compile_obrada: $(SRC)
	cd smisao && $(MAKE) compile_smisao 
	cd pobroji && $(MAKE) compile
	gcc -c $^ $(CFLAGS)
	ld -relocatable $(OBJEKTI) -o obrada-obj.o

clean:
	cd smisao && $(MAKE) clean
	cd pobroji && $(MAKE) clean
	rm -f *.o