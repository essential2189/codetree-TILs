n = int(input())

arr = list(map(int, input().strim().split(" ")))

print(" ".join(map(str, sorted(arr))))
print(" ".join(map(str, sorted(arr, reverse=True))))