from decimal import *

A, B = input().split()

a = int(A)
b = int(Decimal(B) * Decimal(100))

print(int(a * b // 100))
