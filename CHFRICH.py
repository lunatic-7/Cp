n = int(input())

for _ in range(n):
    A, B, X = map(int, input().split())
    k = (B - A) // X
    print(k)
