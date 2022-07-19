n = int(input())

for _ in range(n):
    id = input()
    if (id == 'b') or (id == 'B'):
        print("BattleShip")
    elif (id == 'c') or (id == 'C'):
        print("Cruiser")
    elif (id == 'd') or (id == 'D'):
        print("Destroyer")
    elif (id == 'f') or (id == 'F'):
        print("Frigate")
