# n=int(input()) 백준에서 값의 입력을 이렇게 받으면 오류가 남.
# m=int(input())
# v=int(input())
n,m,v=map(int,input().split())            # 인터넷을 찾아보니 백준은 값 입력을 이런 형식으로 받아야됨.
arr=[[0]*(n+1) for i in range(n+1)]
visited=[0 for i in range(n+1)]
for i in range(m):
    a,b = map(int,input().split())         # 인터넷을 찾아보니 백준은 값 입력을 이런 형식으로 받아야됨.
    arr[a][b]=arr[b][a]=1
d_fs=[]#값 저장 리스트
b_fs=[]

def dfs(v):
    d_fs.append(v)
    visited[v]=1
    for i in range(1,n+1):
        if visited[i]==0 and arr[v][i]==1:            
            dfs(i)
def bfs(v):
    queue = [v]
    visited[v]=0     # dfs를 다 돌아서 visited값이 모두 1로 바꼈기 때문에 조건 수정
    while queue:
        v=queue.pop(0)
        b_fs.append(v)# 답 리스트에 추가
        for i in range(1,n+1):
            if visited[i]==1 and arr[v][i]==1: 
                queue.append(i)
                visited[i]=0
dfs(v)            
bfs(v)
for i in d_fs: # print(d_fs,b_Fs)로 출력을 했으나 틀렸다고 떠 이렇게 수정.
    print(i)
for i in b_fs:
    print(i)
