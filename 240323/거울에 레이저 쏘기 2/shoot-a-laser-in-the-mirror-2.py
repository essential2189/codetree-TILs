n = int(input())

board = [list(input()) for _ in range(n)]

k = int(input())


def solution(n, board, k):
    k -= 1
    i = k // n

    direct = [0, 0]
    location = [0, 0]
    if i == 0:
        direct = [1, 0]
        location = [0, k % n]
    elif i == 1:
        direct = [0, -1]
        location = [k % n, n-1]
    elif i == 2:
        direct = [-1, 0]
        location = [n-1, n - 1 - k % n]
    elif i == 3:
        direct = [0, 1]
        location = [n - 1 - k % n, 0]

    answer = 1
    while(True):
        if board[location[0]][location[1]] == '/':
            if direct == [1, 0]:
                direct = [0, -1]
            elif direct == [-1, 0]:
                direct = [0, 1]
            elif direct == [0, 1]:
                direct = [-1, 0]
            elif direct == [0, -1]:
                direct = [11, 0]
        else:
            if direct == [1, 0]:
                direct = [0, 1]
            elif direct == [-1, 0]:
                direct = [0, -1]
            elif direct == [0, 1]:
                direct = [1, 0]
            elif direct == [0, -1]:
                direct = [-1, 0]

        location[0] += direct[0]
        location[1] += direct[1]

        if location[0] < 0 or location[0] >= n or location[1] < 0 or location[1] >= n:
            return answer
        
        answer += 1


print(solution(n, board, k))