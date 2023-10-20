result = 0
n = int(input())
for test_case in range(n):
    word = input()
    used_char = set(word)
    for char in used_char:
        status = 0 #해당 문자 아직 발견 못했을 때
        for letter in word:
            if (letter == char)&(status==0):
                status = 1 #해당 문자 시작
            elif (letter != char)&(status==1):
                status = 2 #문자 끝 
            elif (letter == char)&(status==2): # 그룹 문자 아님
                status = 3 # 그룹 문자 아님
                break 
        if status == 3:
            break
    if status != 3:
        result = result + 1
print(result)