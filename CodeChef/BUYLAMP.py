t = int(input())

for _ in range(t):
    n, k, x, y = map(int, input().split())
    amount = k * x
    r = n - k
    if y < x:
        amount += r * y
    else:
        amount += r * x
    print(amount)