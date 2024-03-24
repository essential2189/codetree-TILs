class Location:
    def __init__(self, name, code, loc):
        self.name = name
        self.code = code
        self.loc = loc

    def print(self):
        print("name", self.name)
        print("addr", self.code)
        print("city", self.loc)


n = int(input())

arr = []
for _ in range(n):
    a = input().split(" ")
    arr.append(Location(a[0], a[1], a[2]))

slow = arr[0]
for a in arr[1:]:
    if a.name > slow.name:
        slow = a


slow.print()