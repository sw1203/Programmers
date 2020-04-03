def solution(n):
    answer = ''
    a = ['수','박']
    for i in range(0,n):
        answer=answer+a[i%2]
    return answer
