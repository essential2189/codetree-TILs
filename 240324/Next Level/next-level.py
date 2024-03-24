class NextLevel:
    def __init__(self, name, level):
        self.name = name
        self.level = level
    
    def print(self):
        print("user {0} lv {1}".format(self.name, self.level))
    

a = input().split(" ")

codetree = NextLevel("codetree", "10")
user = NextLevel(a[0], a[1])

codetree.print()
user.print()