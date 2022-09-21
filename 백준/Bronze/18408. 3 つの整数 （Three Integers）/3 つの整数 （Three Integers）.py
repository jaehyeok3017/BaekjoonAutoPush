a = input().split(' ')

count_one = 0 
count_two = 0


for i in range(3):
    if(a[i] == '1'): 
        count_one += 1

    elif(a[i] == '2'): 
        count_two += 1

if(count_one > count_two): print(1)
elif(count_two > count_one): print(2)