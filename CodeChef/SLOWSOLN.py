def solution():
    maxT, maxN, sumN = map(int,input().split())

    ans = 0
    while maxT and sumN:
        N = min(maxN, sumN)
        ans += N * N
        maxT -= 1
        sumN -= N
    print(ans)

T = int(input())
while T > 0:
    T -= 1
    solution()