sec = int(input("Sekunden: "))

print("---------")


min = sec / 60
hour = sec / 3600
sec = sec % 60

if(hour == 1):
    min = 0
    sec = 0
elif(min == 1):
    hour == 0
    sec == 0
elif(sec == 1):
    hour == 0
    min == 0

print("Stunden: " , hour)
print("Minuten: " , min)
print("Sekunden: " , sec)