T = int(input())

for _ in range(T):
    N = int(input())
    f = list(map(int, input().split()))
    total = 0
    for i, v in enumerate(f):
        if i == 0 and v == 0:
            break
        elif i == 0:
            total += v
            continue
        elif total >= i - 1:
            total += v
        else:
            break
    print(total)

# WRONG