n = int(input())

class Student:
    def __init__(self, name, k, e, m):
        self.name = name
        self.k = k
        self.e = e
        self.m = m

    def print(self):
        print(self.name, self.k, self.e, self.m)

arr = []
for _ in range(n):
    name, k, e, m = list(input().strip().split(" "))

    arr.append(Student(name, k, e, m))

arr.sort(key=lambda x: (int(x.k), int(x.e), int(x.m)), reverse=True)

for a in arr:
    a.print()