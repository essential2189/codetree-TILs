n = int(input())

dict_ = {}

for _ in range(n):
    string = input()
    if string in dict_:
        dict_[string] += 1
    else:
        dict_[string] = 1

answer = 0
for k in dict_:
    if dict_[k] > answer:
        answer = dict_[k]

print(answer)