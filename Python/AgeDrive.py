print("Enter your age")
age = int(input())
if age>18 and age<100:
    print("You can drive")
elif age==18:
    print("Physical verification is required")
else:
    print("You cannot drive")