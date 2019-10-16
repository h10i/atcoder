D, N = map(int, input().split())

if N < 100:
    ans = (100 ** D) * N
else:
    ans = (100 ** D) * (N + 1)

print(ans)
