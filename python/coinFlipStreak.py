import random
numberOfStreak=0
for experimentNumber in range(10000):
    toss=[]

    for i in range(100):
        temp=random.randint(0,1)  #0=heads, 1= tails
        if(temp==0):
            toss.append('H')
        elif(temp==1):
            toss.append('T')
    for i in range(100):
        if(((toss[i:i+6]==['H','H','H','H','H','H']) or (toss[i:i+6]==['T','T','T','T','T','T']))):
            numberOfStreak += 1


print(numberOfStreak)
print('Chance of streak: %s%%' % (numberOfStreak / 1000))