print("Enter value of num1 ", end="")
num1 = input()
print("Enter value of num2 ", end="")
num2 = input()
try:
    print("The addition is ", int(num1)+int(num2))
except Exception as e:
    print(e)
print("This is an important code")
