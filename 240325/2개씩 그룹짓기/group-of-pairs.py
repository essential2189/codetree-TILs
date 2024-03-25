n = int(input())

arr = list(map(int, input().strip().split(" ")))

arr.sort()


group = []
for i in range(len(arr) // 2):
    group.append(arr[i] + arr[-i-1])


print(max(group))