class Product:
    def __init__(self, name, code):
        self.name = name
        self.code = code

    def print(self):
        print("product {0} is {1}".format(self.code, self.name))


codetree = Product("codetree", "50")

a = input().split(" ")

p = Product(a[0], a[1])

codetree.print()
p.print()