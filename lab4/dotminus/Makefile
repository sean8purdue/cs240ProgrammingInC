
all: dotProduct

dotProduct: main.o read_vectors.o calc_dotmag.o
	gcc -o dotProduct main.o read_vectors.o calc_dotmag.o
	
main.o: main.c dotheader.h
	gcc -c main.c
	# bug2 generating .gch file
	#gcc -c main.c dotheader.h 

# the belowing also works
#main.o: main.c dotheader.h
	#gcc -c main.c

read_vectors.o: read_vectors.c
	gcc -c read_vectors.c

calc_dotmag.o: calc_dotmag.c
	gcc -c calc_dotmag.c

clean:
	rm -f *.o dotProduct
