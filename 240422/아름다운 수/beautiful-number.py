n = int(input())

def check(string):
    one = []
    two = []
    three = []
    four = []
    temp = string[0]
    for s in string[1:]:
        if s == temp[-1]:
            temp += s
        else:
            if temp[0] == "1":
                one.append(temp)
            elif temp[0] == "2":
                two.append(temp)
            elif temp[0] == "3":
                three.append(temp)
            elif temp[0] == "4":
                four.append(temp)

            temp = s

    if temp[0] == "1":
        one.append(temp)
    elif temp[0] == "2":
        two.append(temp)
    elif temp[0] == "3":
        three.append(temp)
    elif temp[0] == "4":
        four.append(temp)

    if len(two):
        for t in two:
            if len(t) % 2 != 0:
                return False

    if len(three):
        for t in three:
            if len(t) % 3 != 0:
                return False
    
    if len(four):
        for f in four:
            if len(f) % 4 != 0:
                return False
    
    return True


answer = []
def dfs(string, i):
    if len(string) == n:
        if check(string):
            answer.append(string)
        return

    for i in range(1, 5):
        string += str(i)
        dfs(string, i)
        string = string[:-1]

dfs("", 1)
print(len(answer))