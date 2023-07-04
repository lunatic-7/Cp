T = int(input())

for _ in range(T):
    S, A, B, C = map(int, input().split())
    if A <= (S + ((C/100) * S)) <= B:
        print("Yes")
    else:
        print("No")
