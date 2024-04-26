import copy

n = int(input())

bombed = [[False] * n for _ in range(n)]

bomb_shapes = [
        [[-1, 0], [-2, 0], [0, 0], [1, 0], [2, 0]],
        [[-1, 0], [1, 0], [0, 0], [0, -1], [0, 1]],
        [[-1, -1], [1, 1], [0, 0], [1, -1], [-1, 1]]
    ]

bomb_type = [[-1 for _ in range(n)]for _ in range(n)]

bomb_loc = []

def bomb(x, y, b_type):
    for i in range(5):
        dy, dx = bomb_shapes[b_type][i]
        ny = y + dy
        nx = x + dx
        if ny >= 0 and ny < n and nx >= 0 and nx < n:
            bombed[ny][nx] = True
        
def calc():
    for i in range(n):
        for j in range(n):
            bombed[i][j] = False

    
    for i in range(n):
        for j in range(n):
            if bomb_type[i][j]:
                bomb(i, j, bomb_type[i][j])
    
    count = 0
    for i in range(n):
        for j in range(n):
            if bombed[i][j]:
                count += 1
    
    return count

answer = 0
def find_max_area(idx):
    global answer

    if idx == len(bomb_loc):
        answer = max(answer, calc())
        return

    for i in range(3):
        y, x = bomb_loc[idx]

        bomb_type[y][x] = i
        find_max_area(idx + 1)
        bomb_type[y][x] = -1

for i in range(n):
    given_row = list(map(int, input().split(" ")))
    for j, bomb_place in enumerate(given_row):
        if bomb_place:
            bomb_loc.append([i, j])

find_max_area(0)

print(answer)