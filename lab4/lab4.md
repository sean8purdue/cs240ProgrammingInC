# Lab 4: Parsing bits and strings, static libraries, and system() (200 pts)
Due: 07/12/2017 (Wed), 11:59 PM


## Objective 
The objective of this lab is to practice parsing input viewed as bits and strings. We will also employ system utilities commonly used with C programs such as archives for static linking and system() to execute legacy binaries from within an app.


## Problems [200 pts]

### Problem 1 (70 pts)
This is an extension of Problem 4, Lab 3. Code an additional function with function prototype  
` void calc_diff(int, float *, float *, float *); `  
that takes four arguments. The first argument specifies vector size, the second and third argument the two input vectors, and the fourth argument a pointer to a 1-D array, float u[MAXSIZE], which stores the result of subtracting the vector x[] from y[]. read_vectors() should be reused as is and u[] should be printed to stdout from main().

An important difference is the system aspect of the implementation where you are asked to create a library of object files using the archiving utility ar. Your main.c compiled separately into main.o using -c will then statically link with your library, call it `libmymath.a`.

`gcc -o mymain main.o -static -L <pathname-of-lib-directory> -l mymath   
`
where <pathname-of-lib-directory> specifies the pathname of the directory where the archive libmymath.a is located. The archive should contain three object files: read_vectors.o, calc_dotmag.o, calc_diff.o. To create the initial archive run   
`ar rcs libmymath.a read_vectors.o`  
To check the content of the archive run   
`     ar t libmymath.a `  

Add further object files to the archive (do it one by one) by running   
` ar rcs libmymath.a calc_dotmag.o `

and similarly for calc_diff.o. The option r inserts an object file into the archive, replacing a previous version if one exists. The modifier c creates an archive if it doesn't exist. The s modifier maintains an object file symbol index. After performing updates manually, modify the Makefile submitted in lab3 so that archive entries are automatically updated whenever object files are updated. Recall that actions, such as running gcc, after specifying a dependency (which are updated based on time stamps as noted in class), are added by inserting a tab followed by an action (in our case, ar with arguments). Test that the Makefile works correctly by selectively deleting object files and/or writing to .c files. Deposit the source code, object code, object code archive, and Makefile in v20/.



### Problem 2 Unsigned Char & Hex output (50 pts)

Char and Unsigned char are both 1 byte. 

`signed char`, which gives you at least the -127 to 127 range. (-128 to 127 is common), two's complement.

`unsigned char`,  which gives you at least the 0 to 255 range.

`unsigned char -5`, 5 in one's complement is `0000 0101`, flip to `1111 1010`, plus 1 to `1111 1011`, which is `-5` in two's complent.

If we treat `1111 1011` as unsgined, that is `2^7 + 2^6 + 2^5+ 2^4 + 2^3 + 2^2 + 1 = 251`.

### Problem 3 (80 pts)

### Bonus Promblem (20 pts)
