length = int(input("Länge: "))
weight = int(input("Breite: "))

area = length * weight
border = length + length + weight + weight

print("Fläche: " , area)
print("Umfang: " , border)