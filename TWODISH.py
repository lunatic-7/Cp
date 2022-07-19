T = int(input())

for _ in range(T):
    N, A, B, C = map(int, input().split())
    if (N <= B) and (A + C >= N):
        print("YES")
    else:
        print("NO")
