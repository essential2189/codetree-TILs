n = int(input())

class Student:
    def __init__(self, name, h, w):
        self.name = name
        self.h = h
        self.w = w

    def print(self):
        print(self.name, self.h, self.w)


arr = []
for _ in range(n):
    name, h, w = list(input().strip().split(" "))

    arr.append(Student(name, int(h), int(w)))

arr.sort(key = lambda x: (x.h, -x.w))

for a in arr:
    a.print()