n, k = list(map(int, input().strip().split(" ")))

arr = list(map(int, input().strip().split(" ")))

m = {}

for a in arr:
    if a in m:
        m[a] += 1
    else:
        m[a] = 1

answer = 0
for i in range(k):
    m[arr[i]] -= 1
    for j in range(i):
        diff = k - arr[i] - arr[j]

        if diff in m:
            answer += m[diff]

print(answer)