n = int(input())

board = []
for _ in range(n):
    board.append(list(map(int, input().strip().split(" "))))

bomb = [[[-1, 0], [-2, 0], [1, 0], [2, 0]],
        [[-1, 0], [1, 0], [0, -1], [0, 1]],
        [[-1, -1], [1, 1], [1, -1], [-1, 1]]]

loc = []
for i in range(n):
    for j in range(n):
        if board[i][j] == 1:
            loc.append([i, j])

answer = 0

list_ = []
def dfs(arr, idx):
    if len(arr) == 2:
        list_.append(arr[:])
        return
    
    for i in range(idx, 3):
        arr.append(i)
        dfs(arr, i+1)
        arr.pop()

    return

for i in range(len(loc)):
    dfs([i], 0)