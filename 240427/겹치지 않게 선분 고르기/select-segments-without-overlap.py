n = int(input())

line = []
for _ in range(n):
    line.append(tuple(map(int, input().strip().split(" "))))

def check(arr):
    for i in range(len(arr)-1):
        for j in range(i+1, len(arr)):
            # i가 j 사이에 있는지
            if arr[j][0] <= arr[i][0] <= arr[j][1]:
                return False
            if arr[j][0] <= arr[i][1] <= arr[j][1]:
                return False
            
            # j가 i 사이에 있는지
            if arr[i][0] <= arr[j][0] <= arr[i][1]:
                return False
            if arr[i][0] <= arr[j][1] <= arr[i][1]:
                return False
    
    return True

answer = 0
arr = []
def dfs(count, idx):
    global answer
    
    if count > n or idx > n:
        return

    if check(arr):
        answer = max(answer, len(arr))

    for i in range(idx, n):
        arr.append(line[i])
        dfs(count+1, i+1)
        arr.pop()

dfs(0, 0)
print(answer)