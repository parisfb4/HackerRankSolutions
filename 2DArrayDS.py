#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'hourglassSum' function below.
#
# The function is expected to return an INTEGER.
# The function accepts 2D_INTEGER_ARRAY arr as parameter.
#

def hourglassSum(arr):
    maxSum = -9 * 7
    for i in range(4):
        for j in range(4):
            mySum = arr[0+i][0+j] + arr[0+i][1+j] + arr[0+i][2+j] + arr[1+i][1+j] + arr[2+i][0+j] + arr[2+i][1+j] + arr[2+i][2+j]
            if mySum > maxSum: maxSum = mySum
    return maxSum
            

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    arr = []

    for _ in range(6):
        arr.append(list(map(int, input().rstrip().split())))

    result = hourglassSum(arr)

    fptr.write(str(result) + '\n')

    fptr.close()
