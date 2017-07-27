
all: clean system libmymathlib.so dotPower

dotPower: main.o libmymathlib.so
	gcc -o dotPower main.o -L. -l mymathlib -lm
	
main.o: main.c dotheader.h
	gcc -c main.c -fPIC

read_vectors.o: read_vectors.c
	gcc -c read_vectors.c -fPIC

calc_diff.o: calc_diff.c dotheader.h
	gcc -c calc_diff.c -fPIC

calc_power.o: calc_power.c dotheader.h
	gcc -c calc_power.c -fPIC

calc_dotmag.o: calc_diff.c
	gcc -c calc_dotmag.c -fPIC

libmymathlib.so: calc_dotmag.o read_vectors.o calc_diff.o calc_power.o
	#gcc -shared -o libmynewlib.so calc_dot.o calc_sum.o read_vectors.o calc_dist.o 
	gcc -shared -o libmymathlib.so *.o

system:
	export LD_LIBRARY_PATH=.

clean:
	rm -rf *.o libmymathlib.so dotPower
