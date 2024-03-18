#TODO

CFLAGS = -MMD
LDFLAGS = -O3

SRC=$(wildcard *.c)

compile: $(SRC)
	gcc $(LDFLAGS) -c $^ $(CFLAGS)

clean:
	rm -f *.o *.d