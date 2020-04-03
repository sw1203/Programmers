def solution(s):
    a=int(len(s)/2)
    if len(s)%2!=0:
        answer = s[a]
    else:
        answer = s[a-1:a+1]

    return answer
