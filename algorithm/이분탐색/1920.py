##이분탐색을 이용한 첫번째 풀이 (시간초과 실패)
##시간초과 이유는 생각해 봤을 때 탐색 값이 절반 인덱스의 값보다 작으면 이분탐색이 되는데 크면 이분탐색이 안되는 경우가 많아서 실패한 것 같다고 느꼈다.

import sys 
n = sys.stdin.readline()
a =sorted(map(int,sys.stdin.readline().split()))
m = sys.stdin.readline()
b = map(int, sys.stdin.readline().split())
answer=[]
for i in b:
  d=int(n) # 초기값으로 총 길이와 마지막 인덱스 값을 각각 d,c에 저장
  c= a[int(d)-1]
  while 1 :
    if i <c: # b리스트에 찾는 값이 c값보다 작을시 반절로 줄임
      d/=2
      c=a[int(d)]
    elif i==c: # 찾으면 값추가후 중단
      answer.append(1)
      break
    else :
      if int(d)*2<int(n): #두뱃값이 길이 보다 작을시 마지막 탐색을 위해 길이값 부여
        k=int(d)*2
      else : # 두뱃값이 리스트 길이 넘을시 리스트 길이로 설정 
        k=int(n)
      for j in range(int(d),int(k)): # 두뱃값까지 돌려서 값을 찾음
        if a[j]==i:
          answer.append(1)
          break
      answer.append(0)
      break        
for i in answer:
  print(i)

  
# 시간 초과를 해결 할 수 없어서 딕셔너리를 이용하여 문제를 해결 했다.

import sys 
n = sys.stdin.readline()
a =sorted(set(map(int,sys.stdin.readline().split())))
m = sys.stdin.readline()
b = map(int, sys.stdin.readline().split())
answer=[]
dic={}
for i in a: # 위에서 중복값 제거를 해줬기 때문에 값만 추가하면 됨.
  dic[i]=1
for i in b:
  if i in dic.keys():
    answer.append(1)
  else:
    answer.append(0)
for i in answer:
  print(i)
  
# 이후 인터넷 검색을 이용하여 이분탐색을 사용하여 문제도 풀었다.

import sys 
n = sys.stdin.readline()
a =sorted(set(map(int,sys.stdin.readline().split())))
m = sys.stdin.readline()
b = map(int, sys.stdin.readline().split())
answer=[]
for num in b:
    s, e = 0, int(n) - 1		# 맨 앞 값과 맨 뒷  
    check = False		
    while s <= e:		# 앞값이 뒷값 보다 커지면 반복문 탈출
        mid = (s + e) // 2	# 중간값
        if num == a[mid]:	# 찾았을 때
          check = True	
          break		# 반복문 탈출
        elif num > a[mid]:	# 값이 작으면
          s = mid + 1	# 값 증가
        else:			
          e = mid - 1
    if not check:		# 찾지 못한 경우
      answer.append(0)		# 0 출력
    else :
      answer.append(1)
for i in answer:
  print(i)
