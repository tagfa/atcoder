MAX=100000
isprime=[1]*(MAX+1)
isprime[0]=0
isprime[1]=0

for i in range(2,int(pow(MAX,0.5)+1)):
    if isprime[i]==1:
        for j in range(i*2,MAX+1,i):
            isprime[j]=0

islike2017=[0]*(MAX)
for i in range(MAX):
    if isprime[i]==1 and isprime[int((i+1)/2)]==1:
        islike2017[i]=1

cumsum=[0]*(MAX+1)
for i in range(1,MAX+1):
    cumsum[i]=cumsum[i-1]+islike2017[i-1]

Q=int(input())
l=0
r=0
for i in range(Q):
    l, r = map(int, input().split())
    r=r+1
    print(cumsum[r]-cumsum[l])