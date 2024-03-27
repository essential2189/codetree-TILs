n = int(input())

class Peaple:
    def __init__(self, name, h, w):
        self.name = name
        self.h = h
        self.w = w

    def print(self):
        print(self.name, self.h, self.w)

arr = []
for _ in range(n):
    name, h, w = list(input().strip().split(" "))
    arr.append(Peaple(name, h, w))

arr.sort(lambda x: x.h)

for a in arr:
    a.print()