app.bin: main.o abc.o def.o
	gcc -o app.bin main.o abc.o def.o
main.o: main.c functionheader.h
	gcc -c main.c
abc.o: abc.c functionheader.h
	gcc -c abc.c
def.o: def.c
	gcc -c def.c
