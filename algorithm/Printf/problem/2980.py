n,l = map(int,input().split())
a=[]
for i in range(n):
  d,r,g=map(int,input().split())
  a.append([d,r,g])
time=0
stack=0
gil=0
while gil!=l:
  if gil==a[stack][0]:
    if time %(a[stack][1]+a[stack][2])<a[stack][1]:
      time+= a[stack][1] - time %(a[stack][1]+a[stack][2])
    if stack!=n-1:
      stack+=1
  gil+=1
  time+=1
print(time)
