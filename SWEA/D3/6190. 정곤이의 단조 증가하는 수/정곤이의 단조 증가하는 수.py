
T = int(input())


def check(x):
    while(x):
        #print(x%10, ((x//10) % 10))
        if (x%10) < ((x//10) % 10):
            return False
        x = x // 10
    return True



for t in range(T):
    N = int(input())
    Ai = list(map(int, input().split()))

    max = -1

    for i in range(N-1):
        for j in range(i+1, N):
            AixAj = Ai[i] * Ai[j]
            AixAj2= AixAj

            """
            di = [0 for i in range(9)]
            for k in range(8, -1, -1):
                di[k] = AixAj2 % 10
                AixAj2 = AixAj2 // 10
            if (di == sorted(di)):
                if (AixAj > max):
                    max = AixAj
            """
            # print(check(AixAj))
            
            if check(AixAj) == True:
                if (AixAj > max):
                    max = AixAj
            
            
            # print(max)
    
    print('#%d' %(t+1), max)
