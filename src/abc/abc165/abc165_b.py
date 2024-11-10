X = int(input())

depo = 100
ans = 0

while True:
    depo = depo + int(depo * 0.01)
    ans += 1
    if depo >= X:
        break

print(ans)
