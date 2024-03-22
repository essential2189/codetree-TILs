c = input()

def turn_left(d):
    direct = [[1, 0], [0, -1], [-1, 0], [0, 1]]

    idx = direct.index(d)
    
    return direct[(idx + 1) % 4]

def turn_right(d):
    direct = [[1, 0], [0, 1], [-1, 0], [0, -1]]

    idx = direct.index(d)
    
    return direct[(idx + 1) % 4]


def solution(c):
    start = [0, 0]
    direct = [1, 0]

    answer = 0
    for s in c:
        if s == "F":
            start[0] += direct[0]
            start[1] += direct[1]
        elif s == "L":
            direct = turn_left(direct)
        elif s == "R":
            direct = turn_right(direct)

        answer += 1

        if start == [0, 0]:
            return answer

    return -1

print(solution(c))