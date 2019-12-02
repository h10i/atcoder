expression = input().split()

A = int(expression[0])
op = expression[1]
B = int(expression[2])

if op == "+":
    print(A + B)
else:
    print(A - B)
