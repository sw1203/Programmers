def solution(n):
    answer = 1+n
    if n==0:
        return 0
    
    elif n ==1:
        return 1
    
    for i in range(2,int(n/2)+1):
        if (n%i==0):
            answer+=i
            print(i)
    return answer
