import copy
from collections import deque

n, m = list(map(int, input().strip().split(" ")))

ladder = []
for _ in range(m):
    ladder.append(list(map(int, input().strip().split(" "))))

# 빈 사다리 만들기
board = [[0] * (n*2-1) for _ in range(17)]

answer = float("inf")

# 사다리 시작점과 끝점 설정
count = 1
for i in range(0, n*2-1, 2):
    board[0][i] = count
    board[-1][i] = -1
    count += 1

# 세로 줄 설정
for i in range(1, 16):
    for j in range(0, n*2-1, 2):
        board[i][j] = 1

# 가로 줄 설정
for l in ladder:
    board[l[1]][l[0]*2-1] = 1
    
# 사다리 타고 마지막 결과 반환
def check(board, ladder):
    for l in ladder:
        board[l[1]][l[0]*2-1] = 1

    l = [-1 for _ in range(n)]
    for i in range(0, len(board[0]), 2):
        start_point = board[0][i]
        if start_point != 0:
            y = 0
            x = i
            while y < len(board) - 1:
                y += 1
                if x-2 >= 0 and board[y][x-1] == 1:
                    x -= 2
                elif x+2 < len(board[0]) and board[y][x+1] == 1:
                    x += 2

            if board[y][x] == -1:
                l[(x+1)//2] = start_point

    return l


def dfs(lad, idx, result):
    global answer
    if check(copy.deepcopy(board), lad) == result:
        answer = min(answer, len(lad))

    for i in range(idx, m):
        lad.append(ladder[i])
        dfs(lad, i+1, result)
        lad.pop()

    return


def solution():
    # 초기 사다리의 결과값 얻기
    result = check(copy.deepcopy(board), ladder)

    # 사다리 초기화
    for l in ladder:
        board[l[1]][l[0]*2-1] = 0

    dfs([], 0, result)
    
    
solution()
print(answer)