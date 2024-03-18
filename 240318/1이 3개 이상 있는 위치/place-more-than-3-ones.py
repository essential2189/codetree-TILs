def solution(n):
    board = []
    for _ in range(n):
        board.append(list(map(int, input().strip().split(" "))))

    dist = [[0, 1], [1, 0], [0, -1], [-1, 0]]

    answer = 0

    for i in range(n):
        for j in range(n):
            count = 0

            for d in dist:
                y = i + d[0]
                x = j + d[1]

                if y >= 0 and y < n and x >= 0 and x < n:
                    if board[y][x] == 1:
                        count += 1
                    
                    if count >= 3:
                        answer += 1
                        break

    return answer

n = int(input())

print(solution(n))