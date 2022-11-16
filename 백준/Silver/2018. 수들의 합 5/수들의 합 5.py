n = int(input())

l = 1
r = 1
count = 0
sum = 0 

while(l <= r and r <= n):
    if(sum < n):
        sum += r
        r += 1

    else:
        if(sum == n): count += 1
        sum -= l
        l += 1

print(count + 1)