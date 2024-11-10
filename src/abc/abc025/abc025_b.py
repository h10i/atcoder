N, A, B = map(int, input().split())

p = 0

for _ in range(N):
    s, d = input().split()
    x = int(d)

    if x < A:
        x = A
    elif x > B:
        x = B

    if s == "East":
        p += x
    else:
        p -= x

if p > 0:
    print("East", p)
elif p < 0:
    print("West", abs(p))
else:
    print(0)
