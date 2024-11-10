N, M = map(int, input().split())
P = [0] * M
Y = [0] * M

data = [[] for _ in range(N + 1)]

for i in range(M):
    P[i], Y[i] = map(int, input().split())
    data[P[i]].append(Y[i])

for k in set(P):
    data[k].sort()

x = [{} for _ in range(N + 1)]

for k in set(P):
    c = 0
    for v in data[k]:
        c += 1
        x[k][v] = c

for i in range(M):
    id_number = "{:06}{:06}".format(P[i], x[P[i]][Y[i]])
    print(id_number)
