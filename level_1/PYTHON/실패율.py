def solution(N, stages):
    answer = []
    length=len(stages)
    for i in range(1,N+1):
        count=stages.count(i)
        if count == 0:
            fail = 0
        else:
            fail=count/length
        answer.append((i,fail))
        length-=count
    answer = sorted(answer, key = lambda k: k[1], reverse=True)
    answer = [i[0] for i in answer]
    return answer
