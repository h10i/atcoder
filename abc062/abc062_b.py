H, W = map(int, input().split())
a = [input() for _ in range(H)]

print("#" * (W + 2))

for h in range(H):
    print("#" + a[h] + "#")

print("#" * (W + 2))
