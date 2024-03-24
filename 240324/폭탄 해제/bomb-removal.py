class B:
    def __init__(self, code, color, second):
        self.code = code
        self.color = color
        self.second = second

    def print(self):
        print("code :", self.code)
        print("color :", self.color)
        print("second :", self.second)

a = input().split(" ")

boomb = B(a[0], a[1], a[2])

boomb.print()