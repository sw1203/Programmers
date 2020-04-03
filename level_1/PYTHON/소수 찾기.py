def solution(n):
    a=set([i for i in range(3,n+1,2)])
    for i in range(3,n+1,2):
        if i in a:
            a-=set([i for i in range(i+i,n+1,i)])
    return len(a)+1
