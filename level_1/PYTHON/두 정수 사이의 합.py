def solution(a, b):
    answer = 0
    if a==b:
        return a
        
    for i in range(min(a,b),max(a,b)+1):
        answer+=i
    return answer
