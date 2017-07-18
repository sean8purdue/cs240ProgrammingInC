# Programming in C CS240 2017 Summer

This private repository is intended to practice C programming by Guo Li. Thanks to <a href = "https://www.cs.purdue.edu/homes/park/">Professor Kihong Park</a>
!

## Questions
1\. Scope of nested variable implemented with stack frame

2\. How to read a unknown length filename to program (lab3) 
 
- Know to use fixed-sized array, but the pitfall is, have to predefine the limit of filename length. Is there other methods to do this.

3\. Some library like <Math.h>, use `sqrt()` need link with `-lm` option, since `Math.h` doesn't have the code of `sqrt()`. Why `printf()` don't need. Is it dynamic linking?



## Lecture Notes

- What is CS 240 about? ([lec1] [lec1])

- C programs and their system environment (see class notes) (additional reference: [lec2][lec2])
	- C code and machine code ([pdf][machineCode])
	- Roles of C compiler, C preprocessor, assembler, linker, loader
	- Reading and writing to standard I/O
- Run-time errors, basic debugging, variable declaration and static memory allocation, types and expressions, arrays and pointer arithmetic
	- Passing by value vs. reference ([pdf][PassingByValueOrReference])
	- Running programs and segment fault
	- C function calls: basic run-time environment
	- Local vs. global variables
	- Stack smashing (i.e., overflow) in C programs
	- 1-D and 2-D array representation using pointers (multi-dimensional arrays by extension)
	
- Basic file I/O




[lec1]:https://github.com/sean8purdue/cs240ProgrammingInC/blob/lab1/lab1/cs240crisn1.pdf
[lec2]:https://github.com/sean8purdue/cs240ProgrammingInC/blob/lab1/lab1/cs240crisn2.pdf
[machineCode]:https://github.com/sean8purdue/cs240ProgrammingInC/blob/lab1/lab1/cs240-park1.pdf
[PassingByValueOrReference]:https://github.com/sean8purdue/cs240ProgrammingInC/blob/lab2/lab2/PASSING%20ARGUMENTSbY%20VALUEvS%20rEFERENCE.pdf

## Labs

### Lab1 Getting acquainted with C and its system environment

The objective of this introductory lab is to familiarize you with the system environment of C programs under Linux.

### Lab2 Pointers, passing by value vs. reference, and 1-D arrays (205 pts)

The objective of this lab is to practice using pointers as they are commonly used in passing by reference and manipulation of 1-D arrays.

### Lab3 Programming using pointers, arrays, and strings

Practice pointers, arrays, strings and Makefile


