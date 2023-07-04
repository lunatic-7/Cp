i, a = map(float, input().split())
i = int(i)

if (i+0.50 <= a) and (i % 5 == 0):
    print(float(a - i - 0.50))
else:
    print(float(a))
