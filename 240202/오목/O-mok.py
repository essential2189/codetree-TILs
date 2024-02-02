board = []

for i in range(19):
    board.append(list(map(int, input().split(' '))))


def check(i, j, a):
    if (i-5 >= 0):
        if sum([i[j] for i in board[i-5:i]]) == a*5:
            return True, [i-2, j]
        
    if (i+5 < 19):
        if sum([i[j] for i in board[i:i+5]]) == a*5:
            return True, [i+2, j]

    if (j-5 >= 0):
        if sum(board[i][j-5:j]) == a*5:
            return True, [i, j-2]

    if (j+5 < 19):
        if sum(board[i][j:j+5]) == a*5:
            return True, [i, j+2]
    
    return False, []

for i in range(19):
    for j in range(19):
        if board[i][j] == 1:
            win, dist = check(i, j, 1)
            if (win):
                print(1)
                print(dist[0], dist[1])

        if board[i][j] == 2:
            win, dist = check(i, j, 2)
            if (win):
                print(2)
                print(dist[0]+1, dist[1]+1)