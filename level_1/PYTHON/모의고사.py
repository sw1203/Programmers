from itertools import cycle
def solution(answers):
    answer = []
    a=[1,2,3,4,5]
    b=[2,1,2,3,2,4,2,5]
    c=[3,3,1,1,2,2,4,4,5,5]
    count=[0,0,0]
    for i, ai, bi, ci in zip(answers, cycle(a), cycle(b), cycle(c)):
        if i==ai:
            count[0]+=1
        if i==bi:
            count[1]+=1
        if i==ci:
            count[2]+=1
            
    for i in range(len(count)):
        if count[i]==max(count):
            answer.append(i+1)
    
    return answer
