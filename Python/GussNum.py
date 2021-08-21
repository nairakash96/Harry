n = 18
GussNo = 1
while GussNo <= 9:
    num = int(input("Enter a number "))
    if num > n:
        print("Lower num please")
    elif num < n:
        print("Higher num please")
    else:
        print("You Won\nYou took ", GussNo, " no of Guesses")
        break
    print("You are left with ", 9-GussNo, "Guesses")
    GussNo += 1
if GussNo > 9:
    print("Try Again ...Game Over")
