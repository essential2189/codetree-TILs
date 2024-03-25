n = int(input())

a = list(map(int, input().strip().split(" ")))
b = list(map(int, input().strip().split(" ")))

a.sort()
b.sort()

if a == b:
    print("Yes")
else:
    print("No")