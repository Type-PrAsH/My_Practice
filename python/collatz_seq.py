import sys

def collatz(number):
    if number % 2 == 0:
        return number // 2
    else:
        return (3*number) + 1

try:
    number = int(input("Enter number of collatz sequence: "))

    if( number <= 0):
        sys.exit('enter positive number!!')
    is1 = False

    while (not is1):
        print(number, end=',')
        number = collatz(number)

        if number==1:
            is1 = True
        else:
            is1 = False
    print(1)
except ValueError:
    print("enter integer!!")