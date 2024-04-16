n, m = list(map(int, input().strip().split(" ")))

list1 = list(map(int, input().strip().split(" ")))
list2 = list(map(int, input().strip().split(" ")))

dict_ = {}
for l1 in list1:
    if l1 in dict_:
        dict_[l1] += 1
    else:
        dict_[l1] = 1
    

for l2 in list2:
    if l2 in dict_:
        print(dict_[l2], end=" ")
    else:
        print(0, end=" ")