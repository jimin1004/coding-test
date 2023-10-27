import sys
N = int(sys.stdin.readline())
Pi = sys.stdin.readline().split()
result = 0

# Pi를 str에서 int로 변환
for i in range(N):
    Pi[i] = int(Pi[i])

# Pi 오름차순으로 정렬
Pi = sorted(Pi)

for i in range(N):
    for j in range(i,-1,-1): # Pj가 기다려야 하는 시간 Tj = Pj + Pj-1 + Pj-2 ... T0
        result += Pi[j]
        
print(result)