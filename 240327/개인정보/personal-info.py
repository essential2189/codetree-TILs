class Student:
    def __init__(self, name, h, w):
        self.name = name
        self.h = h
        self.w = w

    def print(self):
        print(self.name, self.h, self.w)

arr = []
for _ in range(5):
    name, h, w = list(input().strip().split(" "))

    arr.append(Student(name, int(h), float(w)))

sort_name = sorted(arr, key=lambda x: x.name)
sort_h = sorted(arr, key=lambda x: -x.h)

print("name")
for a in sort_name:
    a.print()

print()
print("height")
for a in sort_h:
    a.print()