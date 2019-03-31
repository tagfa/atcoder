S=input()
c=0
max=0
for s in S:
    if s=="A" or s=="T" or s=="C" or s=="G":
        c+=1
        if c>max:
            max=c
    else:
        c=0

print(max)
