board = []

for i in range(19):
    board.append(list(map(int, input().split(' '))))


def check(i, j, a):
    # 위
    if i-5 >= 0:
        flag = True
        for b in board[i-5:i]:
            if b[j] is not a:
                flag = False
                break

        if flag:
            return True, [i-2, j]
    
    # 아래
    if i+5 < 19:
        flag = True
        for b in board[i:i+5]:
            if b[j] is not a:
                flag = False
                break
        if flag:
            return True, [i-2, j]

    # 뒤 
    if j-5 >= 0:
        flag = True
        for b in board[i][j-5:j]:
            if b is not a:
                flag = False
                break
        if flag:
            return True, [i, j-2]

    # 앞
    if (j+5 < 19):
        flag = True
        for b in board[i][j:j+5]:
            if b is not a:
                flag = False
                break
        
        if flag:
            return True, [i, j+2]

    # 왼쪽 위
    if i-5 >= 0 and j-5 >= 0:
        flag = True
        for k in range(5):
            if board[i-k][j-k] is not a:
                flag = False
                break
        if flag:
            return True, [i-2, j-2]
            
    # 왼쪽 아래
    if i+5 < 19 and j-5 >= 0:
        flag = True
        for k in range(5):
            if board[i+k][j-k] is not a:
                flag = False
                break

        if flag:
            return True, [i+2, j-2]
        
    # 오른쪽 위
    if i-5 >= 0 and j+5 < 19:
        flag = True
        for k in range(5):
            if board[i-k][j+k] is not a:
                flag = False
                break

        if flag:
            return True, [i-2, j+2]

    # 오른쪽 아래
    if i+5 < 19 and j+5 < 19:
        flag = True
        for k in range(5):
            if board[i+k][j+k] is not a:
                flag = False;
                break

        if flag:
            return True, [i+2, j+2]

    return False, []


def solution():
    for i in range(19):
        for j in range(19):
            if board[i][j] == 1:
                win, dist = check(i, j, 1)
                if (win):
                    print(1)
                    print(dist[0]+1, dist[1]+1)
                    return


            if board[i][j] == 2:
                win, dist = check(i, j, 2)
                if (win):
                    print(2)
                    print(dist[0]+1, dist[1]+1)
                    return

solution()