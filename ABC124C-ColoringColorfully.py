S=[int(x) for x in list(str(input()))]
ds={0:1,1:0}
count=0
for i in range(1,len(S)):
    if S[i]==S[i-1]:
        S[i]=ds[S[i]]
        count=count+1
        
print(count)