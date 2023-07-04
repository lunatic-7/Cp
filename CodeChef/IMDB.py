T = int(input())

for _ in range(T):
    N, X = map(int, input().split())
    rating = 0
    for i in range(N):
        S, R = map(int, input().split())
        if (S <= X) and (R >= rating):
            rating = R
    print(rating)
