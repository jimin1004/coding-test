import sys
N = int(sys.stdin.readline())

# 정렬할 단어가 들어갈 리스트
swords = set() 
lwords = []

# 모든 단어 집합에 넣어 중복 제거
for i in range(N): 
    swords.add(sys.stdin.readline().rstrip())

# (단어의 길이, 단어)의 튜플로 리스트로 변환
for i in swords:
    lwords.append((len(i), i))

# 단어의 길이를 먼저 그 다음 단어 사전순으로 정렬
lwords.sort()

for len, i in lwords:
    print(i)