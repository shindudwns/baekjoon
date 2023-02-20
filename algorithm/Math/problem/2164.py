from collections import deque

n=int(input())
arr=deque((range(1,n+1)))
stack=0
x=1
while arr :
  arr.popleft()
  if arr:
    x=arr.popleft()
    arr.append(x)
  
print(x)
