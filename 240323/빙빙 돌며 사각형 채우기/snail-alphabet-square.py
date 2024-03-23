n, m = list(map(int, input().split(" ")))

alpha = ["A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"]

def solution(n, m):
    dist = [[0, 1], [1, 0], [0, -1], [-1, 0]]
    location = [0, 0]
    
    board = [[0] * m for _ in range(n)]
    visited = [[False] * m for _ in range(m)]

    board[0][0] = "A"
    visited[0][0] = True

    idx = 0
    count = 1

    while(count < n*m):
        y = location[0] + dist[idx % 4][0]
        x = location[1] + dist[idx % 4][1]

        if y >= 0 and y < n and x >= 0 and x < m and not visited[y][x]:
            board[y][x] = alpha[count % 26]
            visited[y][x] = True

            location[0] = y
            location[1] = x

            count += 1
        else:
            idx += 1

    return board

for i in solution(n, m):
    print(" ".join(map(str, i)))

# A B C D 
# L M N E 
# K P O F 
# J I H G