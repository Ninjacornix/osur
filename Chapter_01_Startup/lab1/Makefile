# TODO
# Sad se sve prevodi od ovuda.
# Maknuti to neka se sve prevodi zasebnim Makefileovima po direktorijima.

debug ?= 1 #isključiti dodavanjem debug=0 pri make-u, npr. $ make debug=0 run

CFLAGS = -MMD -D DEBUG=$(debug)
LDFLAGS = -O3
LDLIBS =

OBJEKTI = main.o izlaz/izlaz.o obrada/obrada.o ulaz/ulaz.o
DATA = main.o izlaz/izlaz-obj.o obrada/obrada-obj.o ulaz/ulaz-obj.o

ZAGLAVLJA=$(OBJEKTI:.o=.d)

PROG=prog

$(PROG): $(OBJEKTI)
	cd izlaz && $(MAKE) compile_izlaz
	cd obrada && $(MAKE) compile_obrada
	cd ulaz && $(MAKE) compile_ulaz
	gcc $(LDFLAGS) $(DATA) $(LDLIBS) -o $(PROG)

run: $(PROG)
	./$(PROG)

brisi obrisi:
	rm -rf $(ZAGLAVLJA) $(OBJEKTI) $(PROG)

clean:
	cd izlaz && $(MAKE) clean
	cd obrada && $(MAKE) clean
	cd ulaz && $(MAKE) clean

-include $(ZAGLAVLJA)
