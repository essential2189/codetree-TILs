n, k = list(map(int, input().strip().split(" ")))

arr = list(map(int, input().strip().split(" ")))

m = {}

for a in arr:
    if a in m:
        m[a] += 1
    else:
        m[a] = 1

l = []

for k in m:
    l.append([k, m[k]])

l.sort(key=lambda x: (-x[1], -x[0]))

for i in l:
    if i[1] >= k:
        print(i[0], end=" ")