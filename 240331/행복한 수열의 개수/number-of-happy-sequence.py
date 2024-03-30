n, m = list(map(int, input().strip().split(" ")))

board = [list(map(int, input().strip().split(" "))) for _ in range(n)]

answer = 0
for i in range(n):
    x = 0
    prev_x = board[i][0]
    for j in range(n):
        if (board[i][j] == prev_x):
            x += 1
        else:
            x = 1
        
        if x >= m:
            answer += 1
            break
        
        prev_x = board[i][j]

    y = 0
    prev_y = board[0][i]
    for j in range(n):
        if (board[j][i] == prev_y):
            y += 1
        else:
            y = 1

        if y >= m:
            answer += 1
            break
        
        prev_y = board[j][i]

print(answer)