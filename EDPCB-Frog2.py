N,K = map(int,input().split())
h = list(map(int,input().split()))

dp=[float("inf")]*N
dp[0]=0

for i in range(0,N-K):
    for j in range(1,K+1):
        tmp=dp[i]+abs(h[i]-h[i+j])
        if tmp<dp[i+j]:
            dp[i+j]=tmp

for i in range(N-K,N):
    for j in range(1,N-i):
        tmp=dp[i]+abs(h[i]-h[i+j])
        if tmp<dp[i+j]:
            dp[i+j]=tmp

print(int(dp[N-1]))