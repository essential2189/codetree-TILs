n = int(input())

class Location:
    def __init__(self, i, x, y):
        self.i = i
        self.x = x
        self.y = y
        self.distance = abs(x-0) + abs(y-0)

    def print(self):
        print(self.i)

arr = []
for i in range(1, n+1):
    x, y = list(map(int, input().strip().split(" ")))

    arr.append(Location(i, x, y))

arr.sort(key=lambda x: (x.distance, x.i))

for a in arr:
    a.print()