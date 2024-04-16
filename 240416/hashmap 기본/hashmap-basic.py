n = int(input())

dict_ = {}

for _ in range(n):
    i = input().strip().split(" ")
    cmd = i[0]

    if cmd == "add":
        dict_[i[1]] = i[2]
    elif cmd == "remove":
        dict_.pop(i[1])
    elif cmd == "find":
        if i[1] in dict_:
            print(dict_[i[1]])
        else:
            print("None")