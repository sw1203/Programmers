def solution(s):
    answer = ''
    flag =True
    for i in s:
        if i== ' ':
            answer+=' '
            flag=True
            
        elif flag == True:
            answer+=i.upper()
            flag=False
            
        else:
            answer+=i.lower()
            flag=True
        
    return answer
