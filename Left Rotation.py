'''
A left rotation operation on an array shifts each of the array's elements 1 unit to the left. 
For example, if 2 left rotations are performed on array[1,2,3,4,5] , then the array would become[3,4,5,1,2].

Given an array 'a' of 'n' integers and a number, 'd' , perform 'd'
left rotations on the array. Return the updated array to be printed as a single line of space-separated integers.

Function Description

Complete the function rotLeft in the editor below. It should return the resulting array of integers.

rotLeft has the following parameter(s):

   1. An array of integers a .
   2.An integer, 'd' the number of rotations. 
'''
#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the rotLeft function below.
def rotLeft(a, d):
    for i in range(0,d):
        temp = a[0]
        for j in range(0,len(a)-1):
            a[j] = a[j+1]
        a[len(a)-1] = temp
    return a    
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    nd = input().split()

    n = int(nd[0])

    d = int(nd[1])

    a = list(map(int, input().rstrip().split()))

    result = rotLeft(a, d)

    fptr.write(' '.join(map(str, result)))
    fptr.write('\n')

    fptr.close()
