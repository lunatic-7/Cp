n = int(input())

for _ in range(n):
    a, b, c = map(int, input().split())
    if (a + b + c) == 180:
        print("YES")
    else:
        print("NO")