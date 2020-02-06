N = int(input())
total = 0

for n in str(N):
    total += int(n)

if N % total == 0:
    ans = "Yes"
else:
    ans = "No"

print(ans)
