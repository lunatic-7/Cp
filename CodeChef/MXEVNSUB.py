T = int(input())

for _ in range(T):
    n = int(input())

    sum = (n * (n + 1)) / 2
    if sum % 2:
        print(n - 1)
    else:
        print(n)
