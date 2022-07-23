t = int(input())

for _ in range(t):
    x, y, z = map(int, input().split())
    if x < 3:
        print(y * x)
    elif x % 3 == 0:
        br = (x // 3) - 1
        print((y * x) + (br * z))
    elif x % 3 != 0:
        br = x // 3
        print((y * x) + (br * z))
