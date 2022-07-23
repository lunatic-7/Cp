from math import ceil

t = int(input())

for _ in range(t):
    n, k, m = map(int, input().split())
    print(ceil(n / (k * m)))