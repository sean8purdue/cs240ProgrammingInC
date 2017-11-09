# Questions

Encrypt and decrypt:

To Encrypt we add N to input char:  (ch + N) % 128 to round up the char, 

???????  
to decrypt we minus N to input char. (ch -N)

The main problem is that, if the input char is '}' (ASCII Value 125) and we add 5. Then we get 130 which exceeds the 7-bit ASCII range. 

## 1 Overflow out of 127

## 2 overflow less than 0

## 3 char internal representation

char is from 0 to 127 in C. Notice: if we input `ch=128`, '%d' will print -128.

```c
#include <stdio.h>

int main() {
    char ch;
    /*int ch;*/
    scanf("%d", &ch); \\warnning

    int mod = 0;
    mod = ch % 128;
    printf("%d -> %d\n", ch, mod); \\warnning %d->ch;
}

```

```bash
➜  prac1 git:(lab3dev) ✗ ./a.out
1
1 -> 1
➜  prac1 git:(lab3dev) ✗ ./a.out
0
0 -> 0
➜  prac1 git:(lab3dev) ✗ ./a.out
127
127 -> 127
➜  prac1 git:(lab3dev) ✗ ./a.out
128
-128 -> 0
======================================
➜  prac1 git:(lab3dev) ✗ ./a.out
-1
-1 -> -1
➜  prac1 git:(lab3dev) ✗ ./a.out
-127
-127 -> -127
➜  prac1 git:(lab3dev) ✗ ./a.out
-128
-128 -> 0
➜  prac1 git:(lab3dev) ✗ ./a.out
-129
127 -> 127
➜  prac1 git:(lab3dev) ✗ ./a.out
-130
126 -> 126

```

change `char ch` to `int ch`, output change:

```bash
➜  prac1 git:(lab3dev) ✗ ./a.out
-1
-1 -> -1
➜  prac1 git:(lab3dev) ✗ ./a.out
-127
-127 -> -127
➜  prac1 git:(lab3dev) ✗ ./a.out
-128
-128 -> 0
➜  prac1 git:(lab3dev) ✗ ./a.out
-129
-129 -> -1
➜  prac1 git:(lab3dev) ✗ ./a.out
-130
-130 -> -2
```
