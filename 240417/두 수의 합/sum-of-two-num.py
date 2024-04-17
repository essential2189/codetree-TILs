n, k = list(map(int, input().strip().split(" ")))

l = list(map(int, input().strip().split(" ")))

answer = 0
for i in range(len(l)-1):
    for j in range(i, len(l)):
        if l[i]+l[j] == k:
            answer += 1

print(answer)