n, m = list(map(int, input().strip().split(" ")))

di = {}
dn = {}

for i in range(1, n+1):
    a = input()
    di[i] = a
    dn[a] = i

for i in range(m):
    a = input()
    if a.isalpha():
        print(dn[a])
    else:
        print(di[int(a)])