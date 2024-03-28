n = int(input())

class Instance:
    def __init__(self, n, i):
        self.n = n
        self.i = i

arr = list(map(int, input().strip().split(" ")))

ins = []
for i in range(n):
    ins.append(Instance(arr[i], i+1))

ins_sort = sorted(ins, key=lambda x: (x.n, i))

answer = []
for i in ins:
    count = 1
    for i_s in ins_sort:
        if i.i == i_s.i:
            answer.append(count)
        count += 1

print(" ".join(map(str, answer)))