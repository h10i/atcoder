N = int(input())
S = [input() for _ in range(N)]

dic = {}
for s in S:
    dic.setdefault(s, 0)
    dic[s] += 1

dic_sorted = sorted(dic.items(), key=lambda x: (-x[1], x[0]))
max_cnt = dic_sorted[0][1]

for w in dic_sorted:
    if w[1] == max_cnt:
        print(w[0])
    else:
        break
