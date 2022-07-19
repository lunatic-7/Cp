T = int(input())

for _ in range(T):
    A, B, C = map(int, input().split())
    m = min(A,B,C)
    print((A+B+C)-m)
        
