T = int(input())

for _ in range(T):
    N, M, K = map(int, input().split())
    bi = list(map(int, input().split()))
    
    count = 0
    for v in bi:
        if v == 1:
            count += 1
        elif v == 0:
            break
    if count == N:
        print(100)
    elif count >= M:
        print(K)
    else:
        print(0)