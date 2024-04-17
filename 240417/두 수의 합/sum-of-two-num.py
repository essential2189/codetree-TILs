n, k = list(map(int, input().strip().split(" ")))

l = list(map(int, input().strip().split(" ")))

m = {}
for i in l:
    if i in m:
        m[i] += 1
    else:
        m[i] = 1

answer = 0
for i in l:
    if k-i in m:
        answer += m[k-i]

    if k-i == i:
        answer -= 1

print(answer // 2)