n = int(input())

def solution(n):
    board = [[0] * n for _ in range(n)]

    location = [n // 2, n // 2]

    dist = [[0, 1], [-1, 0], [0, -1], [1, 0]]

    idx = 0
    count = 2
    board[n // 2][n // 2] = 1
    d = 1


    while(count < n*n):
        for _ in range(2):
            for _ in range(d):
                location[0] += dist[idx % 4][0]
                location[1] += dist[idx % 4][1]

                if location[0] >= 0 and location[0] < n and location[1] >= 0 and location[1] < n:
                    board[location[0]][location[1]] = count

                count += 1
            idx += 1
        d += 1
    
    return board

for s in solution(n):
    print(" ".join(map(str, s)))