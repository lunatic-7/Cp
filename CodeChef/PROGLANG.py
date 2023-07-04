T = int(input())

for _ in range(T):
    A, B, A1, B1, A2, B2 = map(int, input().split())
    if ((A1 == A) and (B1 == B)) or ((A1 == B) and (B1 == A)):
        print(1)
    elif ((A2 == A) and (B2 == B)) or ((A2 == B) and (B2 == A)):
        print(2)
    else:
        print(0)

