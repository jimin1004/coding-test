import sys

# sys.stdin = open('input_2751.txt', 'r')
n = int(sys.stdin.readline())
nums = []  # 정렬할 숫자가 들어갈 리스트

for i in range(n):  ## 모든 숫자 일단 리스트에 저장
    nums.append(int(sys.stdin.readline().rstrip()))


nums.sort()
print(nums)

for i in nums:
    print(i)
