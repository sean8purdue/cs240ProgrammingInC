# Lab 5: Run-time Environment and Client/Server Programming in C (270 pts)
Due: 07/19/2017 (Wed), 11:59 PM

## Bug
### bug1: Problem2.1 array of strings, char** and agrc[ARGC][CMD]

Try to allocate array of strings, use `char agrc[ARGC][CMD]`, Wrong! Should use `char *argc[ARGC]`.

`char agrc[ARGC][CMD]` means number of `ARGC * CMD` chars. Will cause **`SEGFAUT`** if use `strncpy( (*args+i), cmd, 3);`
   
`char *argc[ARGC]` means number of `ARGC` char pointers which point to `ARGC` strings.



## Objective 
The objective of this lab is to make further use of system utilities when developing C programs, get familiar with the run-time environment of C programs, and start writing C client/server apps which comprise the bulk of apps in use today..


## Problems [270 pts]

### Problem 1 (70 pts)

#### 1 Double define in separate files (directory: esh2defineTest)

`#define NAME "supereth"`  
In your code `NAME` is not a variable. It's a pre-processor symbol, which means the text `NAME` will be replaced everywhere in the input with the string "supreeth". This happens per-file, so it doesn't make sense to talk about it being "external".

If a particular C file is compiled without that #define, any use of NAME will remain as-is.

You can not use extern with macro. but if you want your macro seen by many C files, put your macro definition  `#define NAME "supereth"` in a header file like `def.h` then include your def.h in your C code and then you can use your macro in your C file in all other C file if you include def.h


1\. define same value in separate files

`#define CMD 100` in `esh.c` file, then

`#define CMD 100` in `getCmd.c` file. No conflict.

2\. define different values in separate files

`#define CMD 100` in `esh.c` file, then in file `esh.c` `CMD` is 100.

`#define CMD 50` in `getCmd.c` file. No conflict. in file `getCmd.c` `CMD` is 50.

3\. \#ifndf test in getCmd.c

```c
in esh.c:
#define CMD 100

in getCmd.c: 
#ifndef CMD
#define CMD 50
#endif
```

in `getCmd.c`, `CMD` is still 50, not 100 defined in `esh.c`.

```c
in esh.c:
#ifndef CMD
#define CMD 100
#endif

in getCmd.c: 
#ifndef CMD
#define CMD 50
#endif
```
in `esh.c`, `CMD` is 100; in `getCmd.c`, `CMD` is still 50, not 100 defined in `esh.c`.


```c
in esh.c:
#ifndef CMD
#define CMD 100
#endif

in getCmd.c: 
#define CMD 60
#ifndef CMD
#define CMD 50
#endif
```
in `esh.c`, `CMD` is 100; in `getCmd.c`, `CMD` is still 60.

#### 2 string compare to be equal in c

```c
    if ( strcmp(args[0], "cprt") == 0 ) {
```

### Problem 2 (50 pts)

### Problem 3 (80 pts)

### Bonus Promblem (20 pts)
