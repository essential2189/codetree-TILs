n, k = list(map(int, input().strip().split(" ")))

arr = list(map(int, input().strip().split(" ")))

m = {}

for a in arr:
    if a in m:
        m[a] += 1
    else:
        m[a] = 1

l = []

for i in m:
    l.append([i, m[i]])

l.sort(key=lambda x: (-x[1], -x[0]))

count = 0
for i in l:
    if count < k:
        print(i[0], end=" ")
        count += 1