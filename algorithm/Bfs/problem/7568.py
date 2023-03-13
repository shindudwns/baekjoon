n=int(input())
arr=[]
rank=[]
for i in range(n):
  arr.append(list(map(int,input().split())))
for i in range(n):
  rk=0
  for j in range(n):
    if arr[i][0]<arr[j][0] and arr[i][1]<arr[j][1]:
      rk+=1
  rank.append(rk+1) 
for i in rank:
  print(i)
