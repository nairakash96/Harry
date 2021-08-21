s = [int, float, "Harry", 45, 67, 4, 56, 3, 5, 77, 87, 88]
for item in s:
    if str(item).isnumeric() and item >= 6:
        print(item, end=" ")
