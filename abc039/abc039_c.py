S = input()

t = S[:12]
pattern = "WBWBWWBWBWBW" * 3
key = "001123344556"
scale = ["Do", "Re", "Mi", "Fa", "So", "La", "Si"]

i = pattern.find(S) % len(key)
ans = scale[int(key[i])]

print(ans)
