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

- Scope of global vs. local variables and meaning of static variables

- Function pointers, their use and application
- Bit processing using AND, NOT (i.e., complement), and shift operations
- system(), shells, and the basic structure of client/server programs
- Role of fork() and exec-family calls
- Dynamic memory allocation using malloc(), free(), stale memory
- Programming with command-line arguments in main(), environment variables
- Type conversion/casting
- Composite data structures using struct, user defined types




[lec1]:https://github.com/sean8purdue/cs240ProgrammingInC/blob/lab1/lab1/cs240crisn1.pdf
[lec2]:https://github.com/sean8purdue/cs240ProgrammingInC/blob/lab1/lab1/cs240crisn2.pdf
[machineCode]:https://github.com/sean8purdue/cs240ProgrammingInC/blob/lab1/lab1/cs240-park1.pdf
[PassingByValueOrReference]:https://github.com/sean8purdue/cs240ProgrammingInC/blob/lab2/lab2/PASSING%20ARGUMENTSbY%20VALUEvS%20rEFERENCE.pdf

## Labs

### Lab1 Getting acquainted with C and its system environment (145 pts)

The objective of this introductory lab is to familiarize you with the system environment of C programs under Linux.

1- To verify your submission (e.g lab1), you can use the following command: `turnin -c cs240 -p lab1 -v`

### Lab2 Pointers, passing by value vs. reference, and 1-D arrays (205 pts)

The objective of this lab is to practice using pointers as they are commonly used in passing by reference and manipulation of 1-D arrays.



### Lab3 Programming using pointers, arrays, and strings (220 pts)

Practice pointers, arrays, strings and Makefile

2- For problem 3 of lab3, you should use getc instead of getchar which returns a character from the specified FILE. From a usage standpoint, it's equivalent to the same fgetc() call, and fgetc() is a little more common to see.

3- In Problem 3 of lab3, the main.c file must go in the directory named myencrypt

### Lab4 Parsing bits and strings, static libraries, and system() (200 pts)

The objective of this lab is to practice parsing input viewed as bits and strings. We will also employ system utilities commonly used with C programs such as archives for static linking and system() to execute legacy binaries from within an app.

4- Sample expected output for problem 2 of lab4:   
if the user enters 125:   

```
00000000000000000000000001111101   
13, 0d   
7, 07   
0, 00   
0, 00   
0, 00   
0, 00   
0, 00   
0, 00   
or if the user enters 10334   
00000000000000000010100001011110 
14, 0e 
5, 05 
8, 08 
2, 02 
0, 00 
0, 00 
0, 00 
0, 00 
```

Convert IP address to Integer representation:  
An example for problem 3 of lab4:   
IP address 73.176.165.217   
IP address (Integer representation) 1236313561   
In addition, you can use online convertors to convert an IP address in dotted decimal format to an integer (i.e. For testing purposes).

### Lab5 Run-time Environment and Client/Server Programming in C (270 pts)

The objective of this lab is to make further use of system utilities when developing C programs, get familiar with the run-time environment of C programs, and start writing C client/server apps which comprise the bulk of apps in use today.

For problem 1 of lab 5:  
To generate the executable file use the following command:   
`gcc -o mymain main.o -L . -l mymathlib -lm`  
before executing you need to set the environment variable from command line (not from the Makfile)    
`export LD_LIBRARY_PATH=.`

### Lab 6: Concurrent Client/Server Programs and Dynamic Memory Allocation (290 pts)

The objective of this lab is to further develop concurrent client/server C programming skills and make use of dynamic memory allocation in Linux processes.
