# Questions

Encrypt and decrypt:

To Encrypt we add N to input char:  (ch + N) % 128 to round up the char, 

???????  
to decrypt we minus N to input char. (ch -N)

The main problem is that, if the input char is '}' (ASCII Value 125) and we add 5. Then we get 130 which exceeds the 7-bit ASCII range. 

## 1 Overflow out of 127

## 2 overflow less than 0

