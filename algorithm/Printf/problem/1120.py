n,m=map(str,input().split())
ans=51
for i in range(len(m)-len(n)+1):
  tmp=0
  for j in range(len(n)):
    if n[j]!=m[i+j]:
      tmp+=1
  ans=min(ans,tmp)    
print(ans)
#8개 있는데 5글자이면 0:4 1:5 2:6 3:7  
