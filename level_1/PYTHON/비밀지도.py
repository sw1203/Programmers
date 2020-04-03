'''
def solution(n, arr1, arr2):
    answer=[]
    for a,b in zip(arr1,arr2):
        tmp = bin(a|b)[2:]
        if len(tmp)<n:
            tmp='0'*(n-len(tmp))+tmp
        answer.append(tmp.replace('1','#').replace('0',' '))
    return answer
'''
def solution(n, arr1, arr2):
    answer=[]
    for a,b in zip(arr1,arr2):
        tmp = bin(a|b)[2:]
        #tmp=tmp.rjust(n,'0') #오른쪽 정렬
        tmp=tmp.zfill(n) #n만큼 앞에 0을 추가
        answer.append(tmp.replace('1','#').replace('0',' '))
    return answer
