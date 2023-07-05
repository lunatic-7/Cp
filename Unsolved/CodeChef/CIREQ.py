t = int(input())

for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    a = sorted(a)
    # print(a)
    count = 1
    def arr(a):
        new_arr = []
        for i, v in enumerate(a):
            if v >= i + 1:
                pass
            else:
                count += 1
                new_arr.append(i)
            return count
        return arr(new_arr)
    print(arr(a)) 

# NOT SOLVED