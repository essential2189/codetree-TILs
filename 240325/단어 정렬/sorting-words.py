n = int(input())

arr = [input() for _ in range(n)]

for a in sorted(arr):
    print(a)