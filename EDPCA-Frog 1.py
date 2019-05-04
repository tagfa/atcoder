N = int(input())
h = list(map(int,input().split()))
dp=[0]*N
dp[1]=abs(h[1]-h[0])
for i in range(2,N):
    s1=dp[i-1]+abs(h[i]-h[i-1])
    s2=dp[i-2]+abs(h[i]-h[i-2])
    if s1<s2:
        dp[i]=s1
    else:
        dp[i]=s2

print(dp[N-1])