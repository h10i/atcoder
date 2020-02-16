A, B, C = map(int, input().split())

ans = "No"
if (A == B and A != C) or (B == C and B != A) or (C == A and C != B):
    ans = "Yes"

print(ans)
