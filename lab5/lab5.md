# Lab 5: Run-time Environment and Client/Server Programming in C (270 pts)
Due: 07/19/2017 (Wed), 11:59 PM

## Objective 
The objective of this lab is to make further use of system utilities when developing C programs, get familiar with the run-time environment of C programs, and start writing C client/server apps which comprise the bulk of apps in use today..


## Problems [270 pts]

### Problem 1 (70 pts)

- Double define in separate files (directory: esh2defineTest)

1. define same value in separate files

`#define CMD 100` in `esh.c` file, then

`#define CMD 100` in `getCmd.c` file. No conflict.

2. define different values in separate files

`#define CMD 100` in `esh.c` file, then in file `esh.c` `CMD` is 100.

`#define CMD 50` in `getCmd.c` file. No conflict. in file `getCmd.c` `CMD` is 50.






### Problem 2 (50 pts)

### Problem 3 (80 pts)

### Bonus Promblem (20 pts)
