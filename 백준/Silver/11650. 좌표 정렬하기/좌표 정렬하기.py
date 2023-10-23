import sys
N = int(sys.stdin.readline())
lpoints = []

# 좌표를 [x,y]를 각 요소로 갖게 리스트로 저장. 저장하면서 int로 변환
for i in range(N):
    point = sys.stdin.readline().rstrip().split() # [x, y]
    lpoints.append([int(point[0]), int(point[1])])

lpoints = sorted(lpoints)

for x, y in lpoints:
    print(x, y)