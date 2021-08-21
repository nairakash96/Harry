row=int(input("Enter no of rows "))
b=int(input("Enter 1 or 0 "))
new=bool(b)

if new == True:
#     for i in range(1,row+1):
#         for j in range(1,i+1):
#             print("*", end=" ")
#         print()
# else:
#     for i in range(row,0,-1):
#         for j in range (1,i+1):
#             print("*", end=" ")
#         print()

        for i in range(0, row + 1):
            print("*" * i)
else:
    for i in range(row, 0, -1):
        print("*" * i)