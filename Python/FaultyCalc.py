ch = 1
while ch != 0:
    print("Enter value of a ", end="")
    a = int(input())
    print("Enter value of b ", end="")
    b = int(input())
    print("+\n-\n*\n/\nEnter your choice ", end="")
    c = input()

    if a == 45 and b == 3 and c == '*':
        print(a, "*", b, "= 555")
    elif a == 56 and b == 9 and c == '+':
        print(a, "+", b, "= 77")
    elif a == 56 and b == 6 and c == '/':
        print(a, "/", b, "= 4")
    elif c == '+':
        print(a, "+", b, "=", a+b)
    elif c == '-':
        print(a, "-", b, "=", a-b)
    elif c == '*':
        print(a, "*", b, "=", a*b)
    elif c == '/':
        print(a, "/", b, "=", a/b)
    else:
        print("Out of scope")
    print("Do you want to continue ", end="")
    ch = int(input())
