'''
def solution(x):
    answer = True
    sum=0
    for i in str(x):
        sum+=int(i)
    if x%sum!=0:
        answer=False
    return answer
    '''
def solution(n):
    return n % sum([int(c) for c in str(n)]) == 0
