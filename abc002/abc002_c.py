xa, ya, xb, yb, xc, yc = map(int, input().split())

s = xa - xc
t = ya - yc
p = xb - xc
q = yb - yc

ans = abs(s * q - t * p) / 2

print(ans)
