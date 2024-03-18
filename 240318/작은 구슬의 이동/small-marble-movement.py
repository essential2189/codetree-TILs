def solution(n, t, r, c, d):
    location = [r, c]
    dist = []

    if d == "U":
        dist = [1, 0]
    elif d == "R":
        dist = [0, 1]
    elif d == "L":
        dist = [0, -1]
    elif d == "D":
        dist = [-1, 0]
    
    for _ in range(t):
        y = location[0] + dist[0]
        x = location[1] + dist[1]

        if y < 1:
            dist = [-1, 0]
        elif y > n:
            dist = [1, 0]
        elif x < 1:
            dist = [0, 1]
        elif x > n:
            dist = [0, -1]
        else:
            location[0] = y
            location[1] = x
        
    return " ".join(map(str, location))
        

n, t = list(map(int, input().strip().split(" ")))
r, c, d = list(input().split(" "))

print(solution(n, t, int(r), int(c), d))