# CS240 Midterm1 Outline

1. gcc Preprocessor, Linker, Loader  
	 `-E and -P -c -S -o -lm `   
	 `#include` `#define`
	 - The C preprocessor scans C code for its primitives that start with # and contain keywords such as include and define. Depending on the semantics of the keyword, it carries out the requested operations which modifies the original C code. The modified C code, stripped of all C preprocessor primitives, is then input to the C compiler.
	 - `#include` reads in a file which has the effect of increasing the size of the original C code. 
	 - `#define` replaces all instances of the symboldefined with its actual value (or expression).
	 
2. Passing by value or reference  
	scanf("%d", &x); -> reference
	printf("%d", x); -> value
	
3. 1-D and 2D Array layout

4. pointer, pointer with array, function pointer
	- Based on our discussion of addresses and pointer variables, what is the meaning of a variable d that is declared as int ***d? Based on the material covered in class so far, write a short code snippet that ends with the two statements that compiles, does not crash, and prints the value 7.   
	`***d = 7; `  
	`printf(”%d”, ***d);` 
	 
		**Ans:** `***d` means that its content, **d, is another address. **d means that its content, *d, is yet another address. And the address contained in d, finally contains an integer.
		
		```c
		int a, *b, **c, ***d;		b = &a;		c = &b;		d = &c;		***d = 7;		printf("%d", ***d);
		```		
	- `char (* yourfunc)(void);`  
	yourfunc() does not have any arguments. yourfunc() is a function pointer,i.e., yourfunc() contains the address where another function is located.

5. Global and local, static local, static modifier
	- Note: static only can be initialized once, usually when it's declared.
	- static local variable just can be accessed in its local scope. If it's declared in a for loop, then it is only valid in the for loop, not valid out of the loop, even in the same function. But the value will persistent in the whole process life as default global variable.
	- declare local static variable i, this can be useful if the programmer wants the variable name i to be reused by other functions in an app without conflicting with myfunc()'s i

6. Stack Frame, Stack Smashing
	- The stack memory is used to store arguments passed by the caller (i.e., calling function), the return address,and local variables of the callee (i.e., called function).
	
	
7. Bitwise operation
	- most significant bits and least significant bits  
	
	- find the value of the two most significant bits of z  
	inspect the last two bits (i.e., bit positions 30 and 31, assuming bit positions start at 0) of variable z which is of type int in 32bit architecture.   
	// Prep z so its last two bits become the first two bits. Right shifting by 30.   	`z >> 30`  
	// **Prep a mask** whose bits are 0 everywhere except the first two bits.  	`~(~0 << 2)`  
	// Finally, AND the two.  	`(z >> 30) & ~(~0 << 2)`
	
8. `export`, and `source` in bash  
	- `export` makes the variable available to sub-processes.  
	 	`export name=value`	 
		means that the variable name is available to any process you run from that shell process. If you want a process to make use of this variable, use export, and run the process from that shell.
		`name=value`    
		means the variable scope is restricted to the shell, and is not available to any other process. You would use this for (say) loop variables, temporary variables etc.  
		**Note:** It's important to note that exporting a variable **doesn't make it available to parent processes**. That is, specifying and exporting a variable in a spawned process doesn't make it available in the process that launched it.
		
	- The source command can be used to load any functions file into the current shell script or a command prompt; It read and execute commands from given FILENAME and return. The pathnames in $PATH are used to find the directory containing FILENAME. If any ARGUMENTS are supplied, they become the positional parameters when FILENAME is executed.
	- Sytax of source
		
		```bash
		source filename [arguments]
		source functions.sh
		source /path/to/functions.sh arg1 arg2
		source functions.sh WWWROOT=/apache.jail PHPROOT=/fastcgi.php_jail
		```
	
	- Application of export and source  
	
		```bash
		$ cat set-vars1.sh 
		export FOO=BAR
		$ source set-vars1.sh 
		$ echo $FOO
		BAR
		```
		
9. File IO
	- fprintf(), fscanf() 