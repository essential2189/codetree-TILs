n, m = list(map(int, input().strip().split(" ")))

list1 = list(map(int, input().strip().split(" ")))
list2 = list(map(int, input().strip().split(" ")))

for l2 in list2:
    count = 0
    for l1 in list1:
        if l2 == l1:
            count += 1
    
    print(count, end=" ")