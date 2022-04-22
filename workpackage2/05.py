pieces = int(input("Stückzahl: "))
persons = int(input("Personen: "))

over = pieces % persons

piecesnumber = pieces / persons

print("Stück / P: " , piecesnumber)
print("Rest: " , over)