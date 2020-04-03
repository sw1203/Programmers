def solution(n, lost, reserve):
    answer = 0
    student={}

    for i in range(n):
        student[i+1]=1

    for i in lost:
        student[i]-=1
        
    for z in reserve:    
        student[z]+=1
        
    for k in student:
        if student[k]==0:
            if k != 1 and k != n:
                if student[k-1]>1:
                    student[k]+=1
                    student[k-1]-=1
                elif student[k+1]>1:
                    student[k]+=1
                    student[k+1]-=1
            elif k==1:
                if student[k+1]>1:
                    student[k]+=1
                    student[k+1]-=1
            elif k==n:
                if student[k-1]>1:
                    student[k]+=1
                    student[k-1]-=1        
                    

    for i in student.values():
        if i!=0:
            answer+=1
            
    return answer
