n = int(input())

line = []
for _ in range(n):
    line.append(tuple(map(int, input().strip().split(" "))))

def check(arr):
    for i in range(len(arr)-1):
        for j in range(i+1, len(arr)):
            if arr[i][0] >= arr[j][0] and arr[i][0] <= arr[j][1]:
                return False
            if arr[i][1] >= arr[j][0] and arr[i][1] <= arr[j][1]:
                return False
    
    return True

answer = 0
def dfs(arr, idx):
    global answer

    if len(arr) == n:
        set_arr = set(arr)
        if check(list(set_arr)):
            answer = max(answer, len(set_arr))
        return

    for i in range(idx, n):
        arr.append(line[i])
        dfs(arr, idx+1)
        arr.pop()

dfs([], 0)
print(answer)