n, t, k = list(input().strip().split(" "))

arr = []
for _ in range(int(n)):
    s = input()
    if s[:len(k)] == k:
        arr.append(s)

print(sorted(arr)[int(t)-1])