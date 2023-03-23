n=int(input())
arr=[]
for i in range(n):
  arr.append(int(input())-1)
mx=0
mi=0
i=0
for i in range(n):
  ch=[0 for _ in range(n)]
  ni=i
  nx=0
  ch[i]=1
  #print("|n")
  while 1 :
    #print(ch)
    nx+=1
    if ch[arr[ni]]==0:
      ch[arr[ni]]=1
    else:
      #print(nx)
      if mx<nx:
        mx=nx
        mi=i
      break
    ni=arr[ni]
print(mi+1)
    
    
