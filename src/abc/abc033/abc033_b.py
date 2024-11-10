N = int(input())
cities = {}

for i in range(N):
    S, P = input().split()
    cities[S] = int(P)

half = sum(cities.values()) // 2
name, population = max(cities.items(), key=lambda x: x[1])

if population > half:
    print(name)
else:
    print("atcoder")
