packs = list(map(int, input().split()))

packs.sort()

if packs[0] + packs[1] == packs[2]:
    print("Yes")
else:
    print("No")
