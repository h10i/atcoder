from itertools import zip_longest

O = input()
E = input()

password = ""

for o, e in zip_longest(O, E, fillvalue=""):
    password += o + e

print(password)
