from math import floor

t = int(input())

for _ in range(t):
    n, m = map(int, input().split())
    x = floor(n / 2) * 2
    y = floor(m / 2) * 2
    print(m * n - x * y)
    