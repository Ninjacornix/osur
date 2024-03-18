#TODO

CFLAGS = -Wall
LDFLAGS = -O3

SRC=$(wildcard *.c)

OBJEKTI = smisao.o dublje/dublje.o na-brzinu/na-brzinu.o

compile_smisao: $(SRC)
	cd dublje && $(MAKE) compile 
	cd na-brzinu && $(MAKE) compile
	gcc -c $^ $(CFLAGS)
	ld -relocatable $(OBJEKTI) -o smisao-obj.o

clean:
	rm -f *.o
	cd dublje && $(MAKE) clean
	cd na-brzinu && $(MAKE) clean