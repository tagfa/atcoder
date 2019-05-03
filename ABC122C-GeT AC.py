N,Q=map(int,input().split())
S=input()
isAC=[0]*N
index=0

while index<N:
    acindex=S.find("AC",index)
    if acindex==-1:
        break
    else:
        isAC[acindex+1]=1
        index=acindex+1

cumsum=[0]*(N+1)
for i in range(1,N+1):
    cumsum[i]=cumsum[i-1]+isAC[i-1]

for i in range(Q):
    l,r=map(int,input().split())
    print(cumsum[r]-cumsum[l])
