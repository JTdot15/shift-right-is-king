# README OR NOT
This is a simple code as a proof that shifting an integer right by 1 is much faster than dividing it by 2.
Just use the cpp file with your compiler of choice and change the total variable to be bigger or smaller depending on how long it takes the code to run.
For my i5-12400f, with total set to 100000, and size set to 9223372036854775808 (2^63), my output is: 


Total time for shift right by 1 is 2.5943 milliseconds.
Or 0.0025943 seconds.
Total time for divide by 2 is 25.2332 milliseconds.
Or 0.0252332 seconds.


This code works by taking a large number "size", dividing it by 2 until it reaches 1, then resets and keeps doing the same thing for "total" amount of times.
So if size is 8 and total is 4, each function will have the respective output of: 
----------------|
Divide Size: 4  |
Divide Size: 2  |
Divide Size: 1  |
Divide Size: 4  |
Divide Size: 2  |
Divide Size: 1  |
Divide Size: 4  |
Divide Size: 2  |
Divide Size: 1  |
----------------|
Shift Size: 4   |
Shift Size: 2   |
Shift Size: 1   |
Shift Size: 4   |
Shift Size: 2   |
Shift Size: 1   |
Shift Size: 4   |
Shift Size: 2   |
Shift Size: 1   |
----------------|

