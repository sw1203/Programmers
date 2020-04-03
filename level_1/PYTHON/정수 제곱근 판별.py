import math

def solution(n):
    a= math.sqrt(n)
    if a%1==0:
        return pow(a+1,2)
    else:
        return -1
