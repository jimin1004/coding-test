import sys
N = int(sys.stdin.readline())
I = [] #회의 리스트
L = [] #최대로 많이 회의를 할 때 회의 리스트

for i in range(N):
    I.append(list(map(int, sys.stdin.readline().split())))

I = sorted(I, key= lambda x : [x[1], x[0]]) # 회의가 끝나는 시간 그 다음 시작하는 시간 순으로 정렬
L.append(I[0])
meeting_i = 0

for i in range(meeting_i+1, N):
    if I[meeting_i][1] <= I[i][0]: #두 회의가 겹치지 않음
        L.append(I[i])
        meeting_i = i #다음 회의 탐색을 위해 찾은 회의로 인덱스 변경

print(len(L))