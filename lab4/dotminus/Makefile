
all: dotMinus

dotMinus: main.o read_vectors.o calc_diff.o
	gcc -o dotMinus main.o read_vectors.o calc_diff.o
	
main.o: main.c dotheader.h
	gcc -c main.c

read_vectors.o: read_vectors.c
	gcc -c read_vectors.c

calc_diff.o: calc_diff.c dotheader.h
	gcc -c calc_diff.c

clean:
	rm -f *.o dotMinus
