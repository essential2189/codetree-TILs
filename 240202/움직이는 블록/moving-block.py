n = int(input())

block = []

for i in range(n):
    block.append(int(input()))


block.sort()

avg = int(sum(block) / len(block))

answer = 0

for i in block:
    if (i < avg):
        answer += avg - i
    else:
        break

print(answer)