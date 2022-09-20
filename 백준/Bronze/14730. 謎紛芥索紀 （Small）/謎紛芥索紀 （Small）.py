repeat = int(input())
sum = 0

for i in range(repeat):
    a, b = input().split(' ')
    sum += int(a)*int(b) 

print(sum)