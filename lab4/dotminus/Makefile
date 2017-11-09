
all: dotMinus

dotMinus: main.o libmymath.a
	gcc -o dotMinus main.o -static -L. -l mymath
	#gcc -o dotMinus main.o -static -L/Users/Sean/Downloads/cs240/lab4/dotminus -l mymath
	
main.o: main.c dotheader.h
	gcc -c main.c

read_vectors.o: read_vectors.c
	gcc -c read_vectors.c

calc_diff.o: calc_diff.c
	gcc -c calc_diff.c

calc_dotmag.o: calc_dotmag.c
	gcc -c calc_dotmag.c

libmymath.a: calc_dotmag.o calc_diff.o read_vectors.o
	ar rcs libmymath.a calc_dotmag.o
	ar rcs libmymath.a read_vectors.o
	ar rcs libmymath.a calc_diff.o

clean:
	rm -f *.o dotMinus
