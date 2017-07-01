# Lab 2: Pointers, passing by value vs. reference, and 1-D arrays (205 pts)

Due: 06/27/2017 (Tue), 11:59 PM

## Objective

The objective of this lab is to practice using pointers as they are commonly used in passing by reference and manipulation of 1-D arrays.

## <span id="menu">Questions</span>

* [Q1](#1): If you don't like the filename a.out for the executable, what are two methods for changing it to a different name?
* [L2](#2): Debug skill in c `#define MYDEBUG`

## Bugs

* [B1](#1): Declare `int **z = &y`


## Reading

Read chapters 2 and 3 from K&R (textbook).


## Lab2 code base

The C code base for lab2 is available as a tarball 


/u/data/u3/park/pub/cs240/lab2.tar 

on the Linux machines in LWSN B148. Copy it to your working directory and untar it using 

% tar xvf lab2.tar 

Under lab2, you will find subdirectories that contain versions of code discussed in class and additional code needed for Lab 2.

## Problems [205 pts]

### Problem1 (15 pts)

Compile and run the program in v1 multiple times. What output do you observe, and why?

	
~~~bash
➜  v1 git:(lab2) ✗ ./a.out
5
0x7fff596da9fc
➜  v1 git:(lab2) ✗ ./a.out
5
0x7fff58edb9fc
➜  v1 git:(lab2) ✗ ./a.out
5
0x7fff5f0769fc
~~~

The address of integer will change each run, since when you type ./a.out, the loader will load the executable image of a.out to RAM. And give the running process different running address.

But the value of integer will not change. It will always be 5.

### Problem 2 (15 pts)

Explain why after calling changeval1() in v2 the value of s printed on stdout continues to be 5 (not 3).

Because in main() (caller), we pass the value of s, which is 5 to changeval1() (callee). changeval1() will have a new int variable, lets say parameter1, and copy 5 to parameter1. Then in changeval1(), it change parameter1 to 3, which doesnot change the value of s.

After changeval1() return back to main(), and the variable parameter1 distroyed. While variable s in main() is still alive and the value is still 5.


### Problem 3 (20 pts)

Explain why after calling changeval() in v3 the value of x printed on stdout changes to 3. What happens if we change the assignment "*a = 3" in changeval() to "a = 3"? Explain what happens upon compilation and at run-time when executing a.out.

1. Because we pass the address of x to changeval, in changeval it will have a int pointer variable a. We copy the address of x, &x to a. So a = &x = 0x7fff57e389fc = 0x7fff57e389fc at this running time.

	Then we use dereference *a to change the value which is located at a, that is x. So x change to 3 at this time.

2. If we change the assignment "*a = 3" in changeval() to "a = 3"? gcc will give warning as below:

	~~~
	main.c:27:5: warning: incompatible integer to pointer conversion
      assigning to 'int *' from 'int' [-Wint-conversion]
  a = 3;
    ^ ~
    
    ➜  v3 git:(lab2) ✗ ./a.out
5
0x7fff582df9fc
0x7fff582df9fc
5
	~~~
	
	The value of x in main will not be changed. And there is a potential bug here, since we change the variable of a to 3, the address 3 is usually not belong to our program. If we try to dereference *a, the program will crash.

### Problem4 (15 pts)

Modify the code in v3 so that the function changeval() is placed in a separate file changeval.c. Put the declaration of the function in main() in a separate header file main.h. Verify that everything works as it should by (1) compiling the two .c files separately using the -c option, (2) running gcc on the resultant .o files, and (3) executing a.out.

If you don't like the filename a.out for the executable, what are two methods for changing it to a different name? [BackJump](#menu)


<h3 id="1"></h3>

`gcc -o change main.c changeval.c`

or after compile a.out, use `mv a.out changeval`

### Problem5 (30 pts)
Compile and run the code in v4. Explain the output produced by the program. Suppose we add the assignment "z = &y" to the end of main(). How must z be declared in the program? How do we print the value of x using z? Make the changes to main.c and submit the revised code after checking that it compiles and runs correctly.

1. We declare an int variabel x, and pointer variable *y, which contents an address and point to an int. We print the value of x:5, and the address of x, `&x = 0x7fff513ce9fc`. 

	Then assign &x to y, then `y = &x = 0x7fff513ce9fc`. Then dereference `*y = 5`. Dereference means following the address 0x7fff513ce9fc, get the value in this address, which is 5.
	
2. Declare `int **z = &y;`[BackJump](#menu)

	Since **z point to an int. If we use `int *z = &y`, that means following the address of y, we can get an int in this address. But in our case, we have to follow the address of y, in this address, we get an content (`*y` still an address), and then follow this content, we get an int. 
	
### Problem6 (20 pts)
Compile and execute the code in v6. What is the meaning of segmentation fault? What causes the fault to arise in main() when executing a.out?

1. Segmentation faults are caused by a program trying to read or write an illegal memory location. 
2. But is in line 27, in changeval(int *), the argument is a ponter point to int. Here x = 5, we call `changeval(x);` will try to change the value in address 5, which is not belong to our running process, will cause segfault.

~~~c
#define MYDEBUG

#ifdef MYDEBUG
printf("ok 1\n");
#endif
~~~
This debug style, if we comment out `#define MYDEBUG`, all debug statements below will be removed(not add to source code, same as removed). [BackJump](#menu) <h3 id="2"></h3>