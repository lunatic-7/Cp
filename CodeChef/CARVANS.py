T = int(input())

for _ in range(T):
    N = int(input())
    speed = list(map(int, input().split()))
    post = speed[0]
    cars = 1
    for _ in range(1, N):  # Instead enumerate use this.
        if speed[_] <= post:
            cars += 1
            post = speed[_]
    print(cars) 
            
