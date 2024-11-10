X, Y, A, B, C = map(int, input().split())
P = list(map(int, input().split()))
Q = list(map(int, input().split()))
R = list(map(int, input().split()))

P.sort(reverse=True)
Q.sort(reverse=True)
R.sort(reverse=True)

pi = 0
qi = 0
ri = 0
ans = 0

for _ in range(X + Y):
    p = P[pi] if pi < X else 0
    q = Q[qi] if qi < Y else 0
    r = R[ri] if ri < C else 0

    if p > q:
        if p >= r:
            ans += p
            pi += 1
        else:
            ans += r
            ri += 1
    else:
        if q >= r:
            ans += q
            qi += 1
        else:
            ans += r
            ri += 1

print(ans)
