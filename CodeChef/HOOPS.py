T = int(input())

for _ in range(T):
    N = int(input())
    if N % 2 == 0:
        print(N//2)
    elif N % 2 != 0:
        x = int(N/2 + 1)
        print(x)
