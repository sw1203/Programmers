def solution(a, b):
    answer = ''
    day= ['SUN','MON','TUE','WED','THU','FRI','SAT']
    total=0
    month={1:31,2:29,3:31,4:30,5:31,6:30,7:31,8:31,9:30,10:31,11:30,12:31}
    for i in range(1,a):
        total+=month[i]
    sum=(5+total%7+b%7)%7-1
    answer=day[sum]
    
    return answer
