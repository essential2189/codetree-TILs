n, m = list(map(int, input().split(" ")))

board = [[0] * m for _ in range(n)]
visited  = [[False] * m for _ in range(n)]

direction = [[0, 1], [1, 0], [0, -1], [-1, 0]]
d_idx = 0
location = [0, 0]

board[0][0] = 1
visited[0][0] = True
count = 2

while count <= n * m:
    y = location[0] + direction[d_idx % 4][0]
    x = location[1] + direction[d_idx % 4][1]

    if (y >= 0 and y < n and x >= 0 and x < m and not visited[y][x]):
        board[y][x] = count
        location = [y, x]
        count += 1
        visited[y][x] = True
    else:
        d_idx += 1

for b in board:
    print(" ".join(map(str, b)))