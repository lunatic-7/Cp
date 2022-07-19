N, M, K = map(int, input().split())
cert = 0

for i in range(N):
    li = list(map(int, input().split()))
    add = 0
    for _ in li[:-1]:  # To count till last second no. in li
        add += _
    if (add >= M) and li[-1] <= 10: 
        cert += 1

print(cert)