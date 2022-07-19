n = int(input())

num = 0
for _ in range(n):
    f = input()
    for _ in f:
        if (int(_) == 4):
            num += 1
    print(num)
    num = 0

# Alternate
# for _ in range(int(input())):
#     n=input()
#     r=[2 for i in n if(i=='4')]
#     print(sum(r))