import sys
input = sys.stdin.readline

list = []
re = int(input())

for i in range(re):
    x, y = map(int, input().split(' '))
    list.append([x, y])

list.sort(key = lambda x: x[0])
list.sort(key = lambda x: x[1])

count = 1
time = list[0][1]

for i in range(1, re):
    if (list[i][0] >= time):
        count += 1
        time = list[i][1]

print(count)