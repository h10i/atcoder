s = {"a": input(), "b": input(), "c": input()}
i = {"a": 0, "b": 0, "c": 0}

winner = None
player = "a"

while True:
    if i[player] == len(s[player]):
        winner = player.upper()
        break
    n = i[player]
    i[player] += 1
    player = s[player][n]

print(winner)
