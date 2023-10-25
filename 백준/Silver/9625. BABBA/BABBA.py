import sys
K = int(sys.stdin.readline())
As = [1, 0]
Bs = [0, 1]

for i in range(2, K+1):
    As.append(As[i-2] + As[i-1])
    Bs.append(Bs[i-2] + Bs[i-1])

print(As[K], Bs[K])
