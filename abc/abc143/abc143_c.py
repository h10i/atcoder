N = int(input())
S = input()

total = 1

for i in range(1, N):
    if S[i - 1] != S[i]:
        total += 1

print(total)
