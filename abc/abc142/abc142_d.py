A, B = map(int, input().split())

a, b = A, B
set_a = set([1])
set_b = set([1])

for n in range(2, int(A ** 0.5) + 1):
    if a % n == 0:
        set_a.add(n)
    while a % n == 0:
        a //= n

if a != 1:
    set_a.add(a)

for n in range(2, int(B ** 0.5) + 1):
    if b % n == 0:
        set_b.add(n)
    while b % n == 0:
        b //= n

if b != 1:
    set_b.add(b)

ans = len(set_a & set_b)
print(ans)
