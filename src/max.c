#include <stdio.h>
#include <assert.h>

// Answer to Exercise 2
int max(int* numbers, int size)
{
// precondition is: Size of array > 0
assert(size >= 0);
// maxnum is used to store the maximum number
int maxnum = numbers[0];
// loop uses x to count through the array.
// if a number in the array is greater than maxnum, maxnum will be replace by said number. 
for (int x = 0; x < size; x++){
    if (numbers[x] > maxnum){
        maxnum = numbers[x];
    }
}
return maxnum;
}
