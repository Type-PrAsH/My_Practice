n = int(input("Enter number to find its factorial: "))
def getFact(n):
    if n == 1:
        return 1
    else:
        fact= n * getFact(n-1)
        return fact

fact = getFact(n)

print(fact)