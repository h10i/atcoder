H = int(input())

life = H
enemy = 1
ans = 1

while True:
    life //= 2
    if life <= 0:
        break
    enemy *= 2
    ans += enemy

print(ans)
