s = input()
k = int(input())

substrings = set()

for i in range(len(s) - k + 1):
    substrings.add(s[i:i + k])

print(len(substrings))
