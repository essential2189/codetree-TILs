import copy

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

###

def check(arr):
    board_copy = copy.deepcopy(board)

    count = len(arr)

    for a in arr:
        l = loc[a[0]]
        b = bomb[a[1]]

        for i in b:
            y = l[0] + i[0]
            x = l[1] + i[1]
            
            if y >= 0 and y < n and x >= 0 and x < n and board_copy[y][x] == 0:
                board_copy[y][x] = 2
                count += 1

    return count

answer = 0
def dfs2(arr, b):
    global answer;

    if len(arr) == len(loc):
        count = check(arr)

        if count > answer:
            answer = count
        return
    
    for i in range(b, len(list_)):
        arr.append(list_[i])
        dfs2(arr, b+3)
        arr.pop()
    
    return

dfs2([], 0)

print(answer)