A, B, C, K = map(int, input().split())
S, T = map(int, input().split())

fee = A * S + B * T
total = S + T

if total >= K:
    fee -= total * C

print(fee)
