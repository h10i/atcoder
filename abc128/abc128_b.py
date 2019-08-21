n = int(input())


class Restaurant:
    def __init__(self, id=None, name=None, score=None):
        self.id = id
        self.name = name
        self.score = score


r = [None for _ in range(n)]

for i in range(n):
    s, p = input().split()
    r[i] = Restaurant(i + 1, s, int(p))

r.sort(key=lambda x: (x.name, -x.score))

for i in range(n):
    print(r[i].id)
