#TODO

CFLAGS = -MMD

SRC=$(wildcard *.c)

compile: $(SRC)
	gcc -c $^ $(CFLAGS)

clean:
	rm -rf *.o *.d