N,K= map(int, input().split())
S=[int(x) for x in list(str(input()))]

nums=list()
ds={0:1,1:0}
now=1
cnt=0
for i in S:
    if i==now:
        cnt=cnt+1
    else:
        nums.append(cnt)
        now=ds[now]
        cnt=1

if cnt!=0:
    nums.append(cnt)

if len(nums)%2==0:
    nums.append(0)

Add=2*K+1
ans=0

sum=[0]*(len(nums)+1)
for i in range(len(nums)):
    sum[i+1]=sum[i]+nums[i]

for i in range(0,len(nums),2):
    
    left=i
    right=min(i+Add,len(nums))

    tmp=sum[right]-sum[left]
    ans=max(ans,tmp)

print(ans)
