loop = int(input())

for i in range(loop):
    num_list = list(map(int, input().split()))
    num_list.sort()

    if(num_list[3] - num_list[1] >= 4):
        print("KIN")

    else:
        sum = 0
        for j in range(1, 4): sum += num_list[j]
        print(sum) 