t = int(input())

for _ in range(t):
    n, k = map(int, input().split())
    A = list(map(int, input().split()))
    str = ""
    for _ in A:
        if k >= _:
            k = k - _
            str += "1"
        elif k < _:
            str += "0"
    print(str)