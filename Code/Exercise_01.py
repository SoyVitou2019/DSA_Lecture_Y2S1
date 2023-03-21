import random as rd
import sys
#declear list for store 20 elements
lis = [0]
for i in range(1,21):
    lis.append(rd.randint(1, 200))
print("===================================== Values in List ===================================")
for i in range(len(lis)):
    print(lis[i], end="; ")
print("")
print("========================================================================================")
running = True
while running:
    x = (int)(input("Enter index :"))
    if x > 0 and x < 21:
        print("Index {} :{}".format(x, lis[x]))
    elif x < 0 or x > 20:
        print("Out of range in list!")
    elif x == 0:
        running = False
        sys.exit()
        
        