A, B, C, D = map(int, input().split())
a = B / A
b = D / C

if a > b:
    print("TAKAHASHI")
elif a < b:
    print("AOKI")
else:
    print("DRAW")
