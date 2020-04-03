def solution(arr1, arr2):
    return [[c + d for c, d in zip(a, b)] for a, b in zip(arr1,arr2)]

'''
import numpy as np
def sumMatrix(A,B):
    A=np.array(A)
    B=np.array(B)
    answer=A+B
    return answer.tolist()
    '''
