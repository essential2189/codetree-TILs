n, m = list(map(int, input().strip().split(" ")))

ladder = []
for _ in range(m):
    ladder.append(list(map(int, input().strip().split(" "))))

board = [[0] * (n*2-1) for _ in range(17)]

count = 1
for i in range(0, n*2-1, 2):
    board[0][i] = count
    board[-1][i] = -1
    count += 1

for i in range(1, 16):
    for j in range(0, n*2-1, 2):
        board[i][j] = 1

for l in ladder:
    board[l[1]][l[0]*2-1] = 1

def check(arr):
    


# [[1, 0, 2, 0, 3, 0, 4], 
# [1, 1, 1, 0, 1, 0, 1], 
# [1, 0, 1, 1, 1, 0, 1], 
# [1, 1, 1, 0, 1, 1, 1], 
# [1, 0, 1, 1, 1, 0, 1], 
# [1, 0, 1, 0, 1, 1, 1], 
# [1, 0, 1, 0, 1, 0, 1], 
# [1, 0, 1, 0, 1, 0, 1], 
# [1, 0, 1, 0, 1, 0, 1], 
# [1, 0, 1, 0, 1, 0, 1], 
# [1, 0, 1, 0, 1, 0, 1], 
# [1, 0, 1, 0, 1, 0, 1], 
# [1, 0, 1, 0, 1, 0, 1], 
# [1, 0, 1, 0, 1, 0, 1], 
# [1, 0, 1, 0, 1, 0, 1], 
# [1, 0, 1, 0, 1, 0, 1], 
# [-1, 0, -1, 0, -1, 0, -1]]