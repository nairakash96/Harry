import datetime


def get_time():
    return datetime.datetime.now()


def take(k):
    if k == 1:
        c = int(input("Enter 1 for Food 2 for Exercise  "))
        if c == 1:
            value = input("Type Here  ")
            with open("Harry_Food.txt", "a") as op:
                op.write(str([str(get_time())])+" : "+value+"\n")
                print("Successfully written")
        else:
            value = input("Type Here  ")
            with open("Harry_Exercise.txt", "a") as op:
                op.write(str([str(get_time())])+" : "+value+"\n")
                print("Successfully written")
    elif k == 2:
        c = int(input("Enter 1 for Food 2 for Exercise  "))
        if c == 1:
            value = input("Type Here  ")
            with open("Rohan_Food.txt", "a") as op:
                op.write(str([str(get_time())]) + " : " + value + "\n")
                print("Successfully written")
        else:
            value = input("Type Here  ")
            with open("Rohan_Exercise.txt", "a") as op:
                op.write(str([str(get_time())]) + " : " + value + "\n")
                print("Successfully written")
    elif k == 3:
        c = int(input("Enter 1 for Food 2 for Exercise  "))
        if c == 1:
            value = input("Type Here  ")
            with open("Sam_Food.txt", "a") as op:
                op.write(str([str(get_time())]) + " : " + value + "\n")
                print("Successfully written")
        else:
            value = input("Type Here  ")
            with open("Sam_Exercise.txt", "a") as op:
                op.write(str([str(get_time())])+" : "+value+"\n")
                print("Successfully written")
    else:
        print("Invalid choice \nEnter \n1.Harry \n2.Rohan \n3.Sam)")


def retrieve(k):
    if k == 1:
        c = int(input("Enter 1 for Food 2 for Exercise  "))
        if c == 1:
            with open("Harry_Food.txt") as op:
                for i in op:
                    print(i, end=" ")
            op.close()
        else:
            with open("Harry_Exercise.txt") as op:
                for i in op:
                    print(i, end=" ")
            op.close()
    elif k == 2:
        c = int(input("Enter 1 for Food 2 for Exercise  "))
        if c == 1:
            with open("Rohan_Food.txt") as op:
                for i in op:
                    print(i, end=" ")
            op.close()
        else:
            with open("Rohan_Exercise.txt") as op:
                for i in op:
                    print(i, end=" ")
            op.close()
    elif k == 3:
        c = int(input("Enter 1 for Food 2 for Exercise  "))
        if c == 1:
            with open("Sam_Food.txt") as op:
                for i in op:
                    print(i, end=" ")
            op.close()
        else:
            with open("Sam_Exercise.txt") as op:
                for i in op:
                    print(i, end=" ")
            op.close()
    else:
        print("Invalid choice \nEnter \n1.Harry \n2.Rohan \n3.Sam)")


print("Health Directory")
do = 1
while do:
    ch = int(input("Enter 1 for Log 2 for Retrieve  "))
    person = int(input("Enter 1.Harry 2.Rohan 3. Sam  "))
    if ch == 1:
        take(person)
    else:
        retrieve(person)
    do = int(input("Do you want to continue  "))
