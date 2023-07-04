t = int(input())

li = []
for _ in range(t):
    a,b = map(int,input().split(" "))
    li.append(a % b)

for _ in li:
    print(_)