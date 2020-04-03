import collections
def solution(participant, completion):
    answer = collections.Counter(participant) - collections.Counter(completion)
    return list(answer.keys())[0]
'''
def solution(participant, completion):
    participant.sort()
    completion.sort()
    for z in range(0,len(completion)):
        if completion[z] != participant[z]:
            answer = participant[z]
            break
        answer = participant[-1]    
    return answer
'''
