n = int(input())

arr = [list(input().split(" ")) for _ in range(n)]


def solution(arr):
    start = [0, 0]

    answer = 0
    for a in arr:
        c = a[0]
        i = int(a[1])

        if c == "N":
            for _ in range(i):
                start[0] += 1
                answer += 1

                if start == [0, 0]:
                    return answer
        elif c == "S":
            for _ in range(i):
                start[0] -= 1
                answer += 1

                if start == [0, 0]:
                    return answer
        elif c == "E":
            for _ in range(i):
                start[1] += 1
                answer += 1

                if start == [0, 0]:
                    return answer
        elif c == "W":
            for _ in range(i):
                start[1] -= 1
                answer += 1

                if start == [0, 0]:
                    return answer

    return -1

print(solution(arr))