s = input()
cnt_01 = 0
cnt_10 = 0

for i in range(len(s)):
    if (i % 2 == 0 and s[i] == "0") or (i % 2 == 1 and s[i] == "1"):
        cnt_01 += 1
    if (i % 2 == 0 and s[i] == "1") or (i % 2 == 1 and s[i] == "0"):
        cnt_10 += 1

print(min(cnt_01, cnt_10))
