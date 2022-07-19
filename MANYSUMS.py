T = int(input())

for _ in range(T):
    L, R = map(int, input().split())
    sum=(2 * R - 2 * L) + 1
    print(sum)
