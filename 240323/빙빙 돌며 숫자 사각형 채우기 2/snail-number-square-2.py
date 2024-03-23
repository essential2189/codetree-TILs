n, m = list(map(int, input().split(" ")))

def solution(n, m):
    board = [[0] * m for _ in range(n)]
    visited = [[False] * m for _ in range(n)]
    dist = [[1, 0], [0, 1], [-1, 0], [0, -1]]

    location = [0, 0]
    board[0][0] = 1
    visited[0][0] = True

    count = 2
    idx = 0
    while(count <= n*m):
        location[0] += dist[idx % 4][0]
        location[1] += dist[idx % 4][1]

        if location[0] >= 0 and location[0] < n and location[1] >= 0 and location[1] < m and not visited[location[0]][location[1]]:
                board[location[0]][location[1]] = count
                count += 1
                visited[location[0]][location[1]] = True
        else:
            location[0] -= dist[idx % 4][0]
            location[1] -= dist[idx % 4][1]
            idx += 1
        
    return board

for i in solution(n, m):
    print(" ".join(map(str, i)))