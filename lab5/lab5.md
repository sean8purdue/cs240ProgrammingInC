# Lab 5: Run-time Environment and Client/Server Programming in C (270 pts)
Due: 07/19/2017 (Wed), 11:59 PM

## Objective 
The objective of this lab is to make further use of system utilities when developing C programs, get familiar with the run-time environment of C programs, and start writing C client/server apps which comprise the bulk of apps in use today..


## Problems [270 pts]

### Problem 1 (70 pts)

- Set env virable in Makefile

```
system:
	export LD_LIBRARY_PATH=.
```

This is an extension of Problem 1, Lab 4. Code an additional function calc_power() with function prototype the same as calc_diff(). calc_power() computes the square of the difference of two vectors: component-wise, one is subtracted from the other and then the difference is squared. For example, for two vectors (4, 5, 1) and (2, 7, 4) we have 

` ((4-2)^2, (5-7)^2, (1-4)^2) = (4, 4, 9) `

Use a math library function in <math.h> that computes powers (do not multiply a number by itself) to calculate its square. 

A difference in the user interface (UI) aspect of the coding is that the input is provided not via stdin but through a file, and the app's output is not to stdout but to a file. Use the fopen(), fscanf(), fprintf(), and fclose() discussed in class to read the input from a file "vecin.dat" and write the result to a file named "vecout.dat" in the current directory. 

A difference in the system aspect of the implementation is that you are asked to create a dynamic (i.e., shared) library instead of a static library used in lab4. Creation of shared libraries is more system dependent but the following is a straightforward way to do it as a user (as opposed to as root for system wide use). First, compile each source file separately with the -c option and the additional -fPIC option (PIC stands for "position independent code"). Second, to generate a shared library named libmymathlib.so, run 

`gcc -shared -o libmymathlib.so *.o`

where for brevity the wildcard * is used for all object files. Please specify the object files separately. Fourth, linking main.o with the shared library follows the same convention as with the static library in lab4. However, don't forget that your code also uses functions from the math library. Fifth, when you try to run mymain you are likely to get an error from the loader that indicates that it cannot find the shared library functions. One way to specify to the loader where to find libmymathlib.so is via the environment variable LD_LIBRARY_PATH. Check using echo $LD_LIBRARY_PATH its value (i.e., existing paths). Unless you have already customized it, it is likely to be undefined or empty. How you define LD_LIBRARY_PATH is dependent on the shell you are running. In the case of tcsh, the following 

` setenv LD_LIBRARY_PATH <pathname-of-lib-directory> `

does the trick. For bash or Bourne shell (sh), the following will do 

`export LD_LIBRARY_PATH=<pathname-of-lib-directory> `

Depending on what shell you are running, configure LD_LIBRARY_PATH accordingly so that the loader can find it. If all goes well, your mymain executable should be able to access your shared library functions in libmymathlib.so dynamically when it is running (as well as those in the math library). Do the above manually once so that you know how to do it step-by-step. 

As in lab4, automate the compilation and linking process with a dynamic libary process by using Makefile. The format for specifying dependencies and actions in Makefile apply as before. However, insert the statement 

`all: libmymathlib.so mymain `

at the top of Makefile which indicates that you are generating two targets (with dependencies): libmymathlib.so and mymain. You can define `LD_LIBRARY_PATH` from the shell or inside Makefile; it is up to you. Submit your work in v10/.

### Problem 2 (50 pts)

### Problem 3 (80 pts)

### Bonus Promblem (20 pts)
