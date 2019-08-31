A, B = map(int, input().split())

if B % A == 0:
    ans = A + B
else:
    ans = B - A

print(ans)
