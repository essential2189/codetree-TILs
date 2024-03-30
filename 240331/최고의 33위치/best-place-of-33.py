n = int(input())

board = [list(map(int, input().strip().split(" "))) for _ in range(n)]

answer = 0
for i in range(n-2):
    for j in range(n-2):
        sum_ = sum(sum(board[i:i+3][j:j+3], []))
        
        if sum_ > answer:
            answer = sum_

print(answer)