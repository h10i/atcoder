N = int(input())
a = list(map(int, input().split()))
alice_p = 0
bob_p = 0
a.sort(reverse=True)

for i in range(N):
    if i % 2 == 0:
        alice_p += a[i]
    else:
        bob_p += a[i]

print(alice_p - bob_p)
