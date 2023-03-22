a,k = map(int,input().split())
cnt=0
while(a!=k):
  if k%2==1:
    k-=1
  elif k//2 >= a :
    k//=2
  else :
    k-=1
  cnt+=1
print(cnt)
