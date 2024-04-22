k, n = list(map(int, input().strip().split(" ")))

def dfs(arr, idx):
    if len(arr) == n:
        print(" ".join(list(map(str, arr))))
        return
    
    for i in range(1, k+1):
        arr.append(i)
        dfs(arr, i+1)
        arr.pop()

    return arr

dfs([], 1)