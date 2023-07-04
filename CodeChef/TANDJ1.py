T = int(input())

for _ in range(T):
    a, b, c, d, K = map(int, input().split())
    dist = abs(a-c) + abs(b-d)
    if (K >= dist and K % 2 == dist % 2):
        print("YES")
    else:
        print("No")
