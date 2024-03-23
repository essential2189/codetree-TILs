n, t = list(map(int, input().split(" ")))

com = input()

board = [list(map(int, input().split(" "))) for _ in range(n)]


def turn_left(dist):
    d = [[-1, 0], [0, -1], [1, 0], [0, 1]]

    idx = d.index(dist)

    return d[(idx+1) % 4]

def turn_right(dist):
    d = [[-1, 0], [0, 1], [1, 0], [0, -1]]

    idx = d.index(dist)

    return d[(idx+1) % 4]

def solution():
    loc = [n // 2, n // 2]
    dist = [-1, 0]

    answer = board[loc[0]][loc[1]]

    for c in com:
        if c == "F":
            y = loc[0] + dist[0]
            x = loc[1] + dist[1]

            if y >= 0 and y < n and x >= 0 and x < n:
                answer += board[y][x]
                loc[0] += dist[0]
                loc[1] += dist[1]
        elif c == "L":
            dist = turn_left(dist)
        elif c == "R":
            dist = turn_right(dist)

    return answer

print(solution())