# Integer-Manipulation
Problem: Certain mathematical problems involve manipulation of the digits within a whole number. One
such problem requires that the digits be re-arranged. In this project, we will reverse the order of the digits
in a number.

The Assignment: Design, develop, and test an Object-Oriented C++ program that removes leading and
trailing zeroes from a whole number and then reverses the remaining digits, keeping the sign of the input
value intact. For example, the reversed value of 123450 is 54321, the reversed value of 005600 is 65;
and the reversed value of -532 is -235. Develop a user-defined Number class to perform all the digit
manipulations.

Discussion: Extracting the digits from a whole number can be performed in at least two ways: 1) repeated
modulus 10 and division by 10 operations, and 2) conversion of the number to a printable string and then
examining the characters in the string. Either method will work, and both are acceptable. How your
Number class functions internally must be transparent to the user, e.g. there must be no cases in which the
inner workings of the Number class produce unique results dependent on its inner workings. Consider the
following

 The Number class must have at least one instance variable for the value being reversed and a
method named reverse() that reverses the digits in the instance variable. Reversing the digits
must not modify the value of the instance variable, but must create a new value and return that
new value to the user as a whole number (not a string).

 Your program must allow the user to enter a whole number (as a number, not a string) from the
console and see the reversed value of it, and to repeat this process until the user enters a zero. Use
a single instance of the Number class to convert each input value to its reversed value.

 For each input value, display the input value and the value returned from the reverse()
method.
