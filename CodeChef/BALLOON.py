T = int(input())

for _ in range(T):
    N = int(input())
    A = list(map(int, input().split()))

    li = []
    count = 0
    for v in A:
        count += 1
        if v in range(1, 8):
            li.append(v)
        if len(li) == 7:
            print(count)
            break
