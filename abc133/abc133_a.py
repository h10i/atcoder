n, a, b = map(int, input().split())
total = a * n
if total > b:
    total = b
print(total)
