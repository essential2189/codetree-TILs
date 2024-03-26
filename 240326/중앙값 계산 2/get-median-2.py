n = int(input())

arr = list(map(int, input().strip().split(" ")))

temp = []
answer = []
for i in range(1, n+1):
    temp.append(arr[i-1])
    temp.sort()

    if i % 2 != 0:
        answer.append(temp[len(temp) // 2])

print(" ".join(map(str, answer)))