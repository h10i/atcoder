N = int(input())
S = input()

a = ord("A")
ans = ""

for s in S:
    ans += chr((ord(s) - a + N) % 26 + a)

print(ans)
