balance = 1000
print("Der neue Kontostand beträgt " , balance)
num = int(input("Welchen Betrag möchten sie abheben?: "))

if(num > 0 and num >= balance):

    exit
else: 
    new = balance - num
    print("Der neue Kontostand beträgt: " , new)
