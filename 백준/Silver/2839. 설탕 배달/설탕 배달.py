import sys
N = int(sys.stdin.readline())

a = 0 # num of 5kg
b = 0 # num of 3kg

#5kg 수를 가장 크게 해서 5*a+3*b 만족하는 a, b 찾기
for a in range(int(N/5), -1, -1):
    for b in range(int(N/3+1)):
        if (5*a + 3* b == N):
            result = a + b
            break
    if (5*a + 3* b == N):
        break
if (5*a + 3* b != N):
    result = -1
print(result)