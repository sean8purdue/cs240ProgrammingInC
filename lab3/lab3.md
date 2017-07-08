# Lab 3: Programming using pointers, arrays, and strings (220 pts)
Due: 07/05/2017 (Wed), 11:59 PM

## Reading 
Read chapters 4 and 5 from K&R (textbook).

## Lab 3 Code Base
A tarball of lab3/ is available as 

`/u/data/u3/park/pub/cs240/lab3.tar `

None of the coding problems directly depend on the code in lab3.

## Problems [220 pts]

### Problem 1 (20 pts)
Write a program that uses uses sizeof() to print the size of all types in Chapter 2 of K & R and their composition with type qualifiers. Deposit main.c in a subdirectory typesize/ created under lab3/.

**Note**: Each compiler is free to choose appropriate sizes for its own hardware, subject only to the restriction that shorts and ints are at least 16 bit, longs are at least 32 bits, and short is no longer than int, which is no longer than long.

Unsigned numbers are always positive or zero, and obey the laws of arithmetic modulo 2^n, where n is the number of bits in the type. So, for instance, if chars are 8 bits, unsigend char ahve values between 0 and 255, while signed chars have values between -128 and 127 (in two's complement machine). Whether plain chars are signed and unsigned is machine-dependent, but printalbe characters are always positive.

```c
char        1 bytes
int         often 32 bits, int either 16 or 32 bits
float       4 bytes
double      8 bytes

short int   often 16 bits, at least 16 bits
long int    in my mac: 64 bits, often 32 bits, at least 32 bits
long double 16 bytes

unsigned char   1 byte 
signed char     1 byte

unsigned int    4 bytes
singed int      4 bytes
```

### Problem 2 (50 pts)

1. Assign statement has value: An assignment expression has the value of the **left operand** after the assignment

```c
	char c;
    while ( (c = getchar()) != '\n' ) 
    c = getchar() \\ the assign statement value is char c

```

```c
        if ( (c >= 65) && (c <= 90) ) {
can't write as:
			if ( 65 <= c <= 90)

```
