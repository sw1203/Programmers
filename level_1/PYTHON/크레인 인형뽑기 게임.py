def solution(board, moves):
    answer = 0
    tmp=[]
    get=[0]
    for i in zip(*board):
        tmp.append(list(filter(lambda a: a != 0,i)))
        print(tmp)
    for i in moves:
        if tmp[i-1] and get[-1]==tmp[i-1][0]:
            answer+=2
            get.pop()
            tmp[i-1].pop(0)
        else:
            if tmp[i-1]:
                get.append(tmp[i-1].pop(0))
    return answer
