n = int(input())

class Student:
    def __init__(self, name, a, b, c):
        self.name = name
        self.a = a
        self.b = b
        self.c = c

    def print(self):
        print(self.name, self.a, self.b, self.c)

arr = []
for _ in range(n):
    name, a, b, c = list(input().strip().split(" "))

    arr.append(Student(name, int(a), int(b), int(c)))

arr.sort(key=lambda x: x.a + x.b + x.c)

for a in arr:
    a.print()