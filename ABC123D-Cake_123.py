import queue
x,y,z,k = map(int, input().split())
a=list(map(int, input().split()))
b=list(map(int, input().split()))
c=list(map(int, input().split()))

a.sort(reverse=True)
b.sort(reverse=True)
c.sort(reverse=True)

q=queue.PriorityQueue()
