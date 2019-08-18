s = input()
msg = "Good"

for i in range(3):
    if s[i] == s[i + 1]:
        msg = "Bad"

print(msg)
