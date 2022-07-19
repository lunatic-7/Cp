n = int(input())

for _ in range(n):
    D, L, R = map(int, input().split())
    if (R >= D >= L):
        print("Take second dose now")
    elif (D > R):
        print("Too Late")
    elif (D < L):
        print("Too Early")