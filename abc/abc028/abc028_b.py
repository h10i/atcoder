S = input()

key = ["A", "B", "C", "D", "E", "F"]
cnt = [0] * 6

for i, k in enumerate(key):
    cnt[i] += S.count(k)

print(" ".join(map(str, cnt)))
