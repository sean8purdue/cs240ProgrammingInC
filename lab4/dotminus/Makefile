
all: dotMinus

dotMinus: main.o libmymath.a
	#gcc -o dotMinus main.o -static -L./ -libmymath
	gcc -o dotMinus main.o -static -L/Users/Sean/Downloads/cs240/lab4/dotminus -l mymath
	
main.o: main.c dotheader.h
	gcc -c main.c

read_vectors.o: read_vectors.c
	gcc -c read_vectors.c
	ar rcs libmymath.a read_vectors.o

calc_diff.o: calc_diff.c dotheader.h
	gcc -c calc_diff.c
	ar rcs libmymath.a calc_diff.o

calc_dotmag.o: calc_diff.c
	gcc -c calc_dotmag.c
	ar rcs libmymath.a calc_dotmag.o

clean:
	rm -f *.o dotMinus
