T = int(input())

for _ in range(T):
    U, V, A, S = map(int, input().split())
    if (V**2) >= (U**2 - 2*A*S):
        print("Yes")
    else:
        print("No")
