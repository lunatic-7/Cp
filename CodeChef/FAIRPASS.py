t = int(input())

for _ in range(t):
    n, k = map(int,input().split(" "))
    if k > n:
        print("YES")
    else:
        print("NO")
