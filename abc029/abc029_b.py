cnt = 0

for _ in range(12):
    S = input()
    if S.count("r") >= 1:
        cnt += 1

print(cnt)
