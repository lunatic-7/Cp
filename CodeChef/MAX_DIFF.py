T = int(input())

for _ in range(T):
    N, S = map(int, input().split())
    T1 = N
    T2 = S - T1
    abs_diff = abs(abs(T1) - abs(T2))
    print(abs_diff)