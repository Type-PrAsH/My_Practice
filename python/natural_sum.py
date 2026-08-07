n = int(input("Enter a natural number to get sum of natural numbers till that number: "))
sumOf=0

def sumOfNatural(n):
    add=0
    if n==1:
        return 1;
    else:
        add = n + sumOfNatural(n-1)
        return add

sumOf= sumOfNatural(n)

print(sumOf)