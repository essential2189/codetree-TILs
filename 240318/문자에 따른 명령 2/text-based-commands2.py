def turn_left(curr):
    direct = [[0, 1], [-1, 0], [0, -1], [1, 0]]

    idx = direct.index(curr)

    return direct[(idx + 1) % 4]

def turn_right(curr):
    direct = [[0, 1], [1, 0], [0, -1], [-1, 0]]

    idx = direct.index(curr)

    return direct[(idx + 1) % 4]

def solution(string):
    # [x, y]
    location = [0, 0]
    direction = [0, 1]

    for c in string:
        if c == "L":
            direction = turn_left(direction)
        elif c == "R":
            direction = turn_right(direction)
        elif c == "F":
            location = [y+x for y, x in zip(location, direction)]
    
    return location

            




print(" ".join(map(str, solution(list(input())))))