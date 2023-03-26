#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'timeConversion' function below.
#
# The function is expected to return a STRING.
# The function accepts STRING s as parameter.
#

def timeConversion(s1):
    # Write your code here
    meridian = s1[-2:]
    if meridian == 'PM' and s1[:2] != '12':
        s1 = str(12 + int(s1[:2])) + s1[2:]
    if meridian == 'AM' and s1[:2] == '12':
        s1 = '00' + s[2:]

    return s1[:-2]


if __name__ == '__main__':

    s = input()
    result = timeConversion(s)
    print(result)
