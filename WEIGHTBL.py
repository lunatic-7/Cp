T = int(input())

for _ in range(T):
    w1, w2, x1, x2, M = map(int, input().split())
    x1 = x1 * M
    x2 = x2 * M
    if x1 <= (w2 - w1) <= x2:
        print(1)
    else:
        print(0)