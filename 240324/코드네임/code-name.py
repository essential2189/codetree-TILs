class CodeName():
    def __init__(self, codename, score):
        self.codename = codename
        self.score = int(score)
    

arr = []
for _ in range(5):
    codename, score = input().split(" ")
    arr.append(CodeName(codename, score))

min_codename = arr[0]
for a in arr:
    if min_codename.score > a.score:
        min_codename = a

print(min_codename.codename, min_codename.score)