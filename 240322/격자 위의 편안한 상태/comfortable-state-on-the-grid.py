n, m = list(map(int, input().split(" ")))


board = [[False] * n for _ in range(n)]

for _ in range(m):
    r, c = list(map(int, input().split(" ")))
    r -= 1
    c -= 1

    board[r][c] = True

    dist = [[1, 0], [0, 1], [-1, 0], [0, -1]]
    count = 0
    for d in dist:
        y = r + d[0]
        x = c + d[1]

        if (y >= 0 and y < n and x >= 0 and x < n and board[y][x]):
            count += 1
    
    if count >= 3:
        print(1)
    else:
        print(0)