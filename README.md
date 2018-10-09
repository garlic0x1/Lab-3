# Lab-3

2.  You can tell when an overflow happens because once the short reaches its maximum value, it turns to the negative. like the classic nuclear Ghandi problem.  It is fine up to n = 256, then overflows on 257.

3.  I let the program run for 13 minutes on GNU/Linux compiled by GCC and my laptop got too hot and it never overflowed so I guess it has the same problem or worse than the one for Mac 

4.  When a float overflows, it does not cycle to the lowest value, but displays "inf" when it is out of bounds.  The highest factorial value that a float takes is 34! = 2.95233e+38 but 35! is not possible to store in a float

5.  171! causes an overflow

7 & 8.  i = 4.4 prints when i is a float type, which is mathematically incorrect.  It is corrected when i is a double type because it doesn't have to cast to double which the constants are.  It seems that gcc interprets a float to be less than an equal double
