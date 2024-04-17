n, k = list(map(int, input().strip().split(" ")))

l = list(map(int, input().strip().split(" ")))

answer = 0
m = {}
for i in range(len(l)-1):
    if l[i] not in m:
        for j in range(i+1, len(l)):
            if l[i] + l[j] == k:
                answer += 1
    m[l[i]] = True


print(answer)