n = int(input())
a = list(map(int, input().split(" ")))

max = 0
sum = 0
for i in range(0, n):
    if(a[i] > max): max = a[i]

for i in range(0, n):
    sum += a[i] / max * 100

print(sum / n)