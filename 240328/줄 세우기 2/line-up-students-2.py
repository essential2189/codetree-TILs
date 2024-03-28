n = int(input())

class Student:
    def __init__(self, i, h, w):
        self.i = i
        self.h = h
        self.w = w

arr = []
for i in range(n):
    h, w = list(map(int, input().strip().split(" ")))
    arr.append(Student(i+1, h, w))

arr.sort(key=lambda x: (x.h, x.w))

for a in arr:
    print(a.h, a.w, a.i)