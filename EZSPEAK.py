t = int(input())

for _ in range(t):
    n = int(input())
    s = input()
    tot = 0
    for _ in s:
        if tot >= 4:
            break
        if (_ == "a" or _ == "e" or _ == "i" or _ == "o" or _ == "u") and tot <= 4:
            tot = 0
            continue
        else:
            tot += 1
        
    if tot < 4:
        print("YES")
    else:
        print("NO")