repeat = int(input())
min = 99999999
min_str = ''

for i in range(repeat):
    a, b = input().split(' ')
    b = int(b)

    if(b < min):
        min = b
        min_str = a

print(min_str)