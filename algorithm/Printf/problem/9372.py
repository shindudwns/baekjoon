import sys
input=sys.stdin.readline

T = int(input()) # 테스트 케이스의 수

for _ in range(T) :
    N, M = map(int, input().split()) # 국가의 수 N과 비행기의 종류 M

    Tree = [[] for _ in range(N+1)]

    # 입력
    for _ in range(M) :
        a, b = map(int, input().split())
        Tree[a].append(b)
        Tree[b].append(a)

    # 방문 체크
    visit = [0] * (N+1)

    def DFS(idx, cnt) :
        # 방문
        visit[idx] = 1

        for i in Tree[idx] :
            if visit[i] == 0 :
                cnt = DFS(i, cnt+1)

        return cnt

    result = DFS(1,0)
    print(result)
    
    ###보고 
