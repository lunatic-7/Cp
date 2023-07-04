T = int(input())

for _ in range(T):
    N, P, X, Y = map(int, input().split())
    time = 0
    A = list(map(int, input().split()))
    for i, v in enumerate(A):
        if (i + 1 < P) and (v == 0):
            time += X
        elif (i + 1 < P) and (v == 1):
            time += Y
        elif (i + 1 == P) and (v == 1):
            time += Y
            break
    print(time)
