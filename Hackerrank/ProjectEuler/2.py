#!/bin/python3

import sys

def fibonacci(n):
    fiblist = []
    prev, next = 1, 1
    while next < n:
        prev, next = next , next+prev
        if next < n:
            if next % 2 == 0:
                fiblist.append(next)
    return sum(fiblist)        
    
t = int(input().strip())
for a0 in range(t):
    print (fibonacci(int(input().strip())))