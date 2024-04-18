n = int(input())

a = list(map(int, input().strip().split(" ")))
b = list(map(int, input().strip().split(" ")))
c = list(map(int, input().strip().split(" ")))
d = list(map(int, input().strip().split(" ")))


m = {}
for i in d:
    if i in m:
        m[i] += 1
    else:
        m[i] = 1

answer = 0
for i in a:
    for j in b:
        for k in c:
            diff = 0 - i - j - k

            if diff in m:
                answer += 1

                m[diff] -= 1

print(answer)