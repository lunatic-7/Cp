def findDoll():
    N = int(input())
    missing = {}
    while N > 0:
        count = int(input())
        if count in missing.keys():
            missing[count] += 1
        else:
            missing[count] = 1
        N -= 1

    for k, v in missing.items():
        if v % 2 != 0:
            print(k)
            

T = int(input())
while T > 0:
    T -= 1
    findDoll()