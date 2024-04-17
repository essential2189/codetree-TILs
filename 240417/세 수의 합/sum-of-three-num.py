n, k = list(map(int, input().strip().split(" ")))

l = list(map(int, input().strip().split(" ")))

m = {}
for i in l:
    if i in m:
        m[i] += 1
    else:
        m[i] = 1

answer = 0
for i in range(len(l)-1):
    for j in range(i+1, len(l)):
        if k-l[i]-l[j] in m:
            answer += m[k-l[i]-l[j]]

        if l[i] == k-l[i]-l[j] or l[j] == k-l[i]-l[j]:
            answer -= 1

print(answer // 3)