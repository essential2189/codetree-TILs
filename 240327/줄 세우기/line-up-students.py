n = int(input())

class Student:
    def __init__(self, idx, h, w):
        self.idx = idx
        self.h = h
        self.w = w

    def print(self):
        print(self.h, self.w, self.idx)

arr = []

for i in range(1, n+1):
    h, w = list(map(int, input().strip().split(" ")))
    arr.append(Student(i, h, w))

arr.sort(key = lambda x: (-x.h, -x.w, x.idx))

for a in arr:
    a.print()