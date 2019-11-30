A, B = map(int, input().split())

if A % 3 == 0 or B % 3 == 0 or (A + B) % 3 == 0:
    ans = "Possible"
else:
    ans = "Impossible"

print(ans)
