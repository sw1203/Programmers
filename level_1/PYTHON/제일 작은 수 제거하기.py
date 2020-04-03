def solution(arr):
    return [i for i in arr if i>min(arr)] or [-1]
