ans=1
n,m=map(int,input().split())
arr=[]
for i in range(n):
  arr.append(list(input()))
for i in range(n):
  for j in range(m):
    mx=min(n-i,m-j)    
    for k in range(1,mx): 
      if arr[i][j]==arr[i+k][j]==arr[i][j+k]==arr[i+k][j+k]:
        ans=max(ans,k+1)
print(ans*ans)
