S = input()
ans = "None"
alphabet = [chr(ord("a") + i) for i in range(26)]

for s in alphabet:
    if s not in S:
        ans = s
        break

print(ans)
