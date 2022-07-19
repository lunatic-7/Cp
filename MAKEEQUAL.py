# MINE (Time limit exceeded)

# T = int(input())

# for _ in range(T):
#     N = int(input())
#     A = list(map(int, input().split()))
#     A.sort()
#     turns = 0
#     while A[0] != max(A):
#         max_index = max(A)
#         for i, v in enumerate(A):
#             if v < max_index:
#                 A[i] += 1
#         turns += 1
#     print(turns)

# SEEN

for _ in range(int(input(""))):
    length=int(input(""))
    list1=list(map(int,input("").split(" ")))
    mini=min(list1)
    maxi=max(list1)
    print(maxi-mini)