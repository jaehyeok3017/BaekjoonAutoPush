sum = 0
hsum = 0

for i in range(20):
    a = input().split(' ')
    a[1] = float(a[1])

    hsum += a[1]
    if(a[2] == "A+"): sum += 4.5 * a[1]
    elif(a[2] == "A0"): sum += 4.0 * a[1]
    elif(a[2] == "B+"): sum += 3.5 * a[1]
    elif(a[2] == "B0"): sum += 3.0 * a[1]
    elif(a[2] == "C+"): sum += 2.5 * a[1]
    elif(a[2] == "C0"): sum += 2.0 * a[1]
    elif(a[2] == "D+"): sum += 1.5 * a[1]
    elif(a[2] == "D0"): sum += 1.0 * a[1]
    elif(a[2] == "P"): hsum -= a[1]

print(sum/hsum)