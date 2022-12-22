a = 'hi'

while(a != "#"):
    a = input()

    if(a == "#"):
        break

    leng = len(a)

    one = 0

    for i in range(0, leng):
        if(a[i] == 'a' or a[i] == 'e' or a[i] == 'i' or a[i] == 'o' or a[i] == 'u' 
        or a[i] == 'A' or a[i] == 'E' or a[i] == 'I' or a[i] == 'O' or a[i] == 'U'):
            one += 1

    print(one)