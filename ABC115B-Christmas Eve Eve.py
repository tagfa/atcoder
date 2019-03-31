n=int(input())
A = [int(input()) for _ in range(n)]

A.sort(reverse=True)
A[0]=int(A[0]/2)
print(sum(A))