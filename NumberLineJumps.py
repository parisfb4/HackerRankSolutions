#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'kangaroo' function below.
#
# The function is expected to return a STRING.
# The function accepts following parameters:
#  1. INTEGER x1
#  2. INTEGER v1
#  3. INTEGER x2
#  4. INTEGER v2
#

def kangaroo(x1, v1, x2, v2):
  '''
  HERE YOU NEED TO KNOW THE PREMISE THAT x1 ALWAYS WILL BE LESS THAN x2
  HAVING SAID THAT YOU COULD GET THIS
  
  x1 + v1 * numberOfJumps = x2 + v2 * numberOfJumps
  
  RESOLVING THE EQUATION FOR numberOfjumps WE HAVE
  
  numberOfJumps = (x2 - x1) / (v1 - v2)
  
  HAVING THIS EQUIATION YOU NEED TO KNOW THAR v1 - v2 NEVER HAVE TO BE ZERO SO THAT
  IT IS ONLY POSSIBLE THAT BOTH KANGOROOS GET EACH OTHER IF 
  THE VELOCITY OF THE SECOND ONE IS MORE THAN THE FIRST ONE.
  
  v1 HAVE TO BE MORE THAN v2
  
  AND FINALLY numberOfJumps NEEDS TO BE AN INTEGER NUMBER
   
  '''
    if v1 <= v2:
        return "NO"
    if (x2 - x1)/(v1 - v2) > 0 and (x2 - x1)%(v1 - v2) == 0:
        return "YES"
    else:
        return "NO"
        
        
        

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    first_multiple_input = input().rstrip().split()

    x1 = int(first_multiple_input[0])

    v1 = int(first_multiple_input[1])

    x2 = int(first_multiple_input[2])

    v2 = int(first_multiple_input[3])

    result = kangaroo(x1, v1, x2, v2)

    fptr.write(result + '\n')

    fptr.close()
