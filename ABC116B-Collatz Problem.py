s=int(input())
a=[]
a.append(s)
for i in range(1,10000000):
    a1=a[i-1]
    if(a1%2==0):
        tmp=int(a1/2)        
    else:
        tmp=3*a1+1
    
    if tmp in a:
        print(i+1)
        exit()

    a.append(tmp)
    