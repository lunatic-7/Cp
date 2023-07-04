n, k = input().split(" ")

i = 0
li = []
while i < int(n):
    num = int(input())
    li.append(num)
    i+= 1

div = map(lambda x: x % int(k) == 0, li)

tot = 0
for _ in list(div):
    if _ == 1:
        tot += 1

print(tot)

