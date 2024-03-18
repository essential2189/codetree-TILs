def solution(n):
    # [x, y]
    start = [0, 0]

    for _ in range(n):
        d, i = input().split(" ")
        i = int(i)
        
        if d == "N":
            start[1] += i
        elif d == "S":
            start[1] -= i
        elif d == "E":
            start[0] += i
        elif d == "W":
            start[0] -= i
    
    return start


n = int(input())

answer = solution(n)
print(" ".join(map(str, answer)))