n = int(input())

for i in range(n):
    M = input()
    count1 = 0
    count2 = 0

    for j in range(len(M)):
        if (M[j] == '('):
            count1 += 1
        
        elif(M[j] == ')'):
            if(count1 == 0):
                count2 = 100
                break
            
            else:
                count2 += 1
        
        if(count1 == count2):
            count1 = 0
            count2 = 0
        
    if(count1 == count2):
        print("YES")
    
    else:
        print("NO")