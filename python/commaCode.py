userList = []
userList =list(input('Enter values of list(seperated by space): ').split())
print(userList)

for i in range(len(userList)-1):
    print(userList[i], end=', ')

print('and ' + userList[-1])