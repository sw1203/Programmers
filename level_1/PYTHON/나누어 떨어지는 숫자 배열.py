def solution(arr, divisor):
    arr.sort()
    
    if divisor==1:
        return arr
    
    answer = []
    
    for i in arr:
        if i%divisor==0:
            answer.append(i)

    if len(answer)==0:
        answer.append(-1)
    
    return answer
