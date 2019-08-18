n = int(input())
v = list(map(int, input().split()))

while True:
    v.sort(reverse=True)
    v.append((v.pop() + v.pop()) / 2)
    if len(v) == 1:
        break

print(v[0])
