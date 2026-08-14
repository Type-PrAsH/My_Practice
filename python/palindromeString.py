import sys

string = str(input('Enter String to check if its palindrome: '))
string = "".join(string.split())

for character in range(len(string)):
    if(string[character]==string[len(string)-1-character]):
        continue
    else:
        print("The given string is not a palindrome")
        sys.exit()

print("The given string is a palindrome")