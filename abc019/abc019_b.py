s = input()

compressed = ""
n = len(s)
end = 0

while end < n:
    start = end
    while end < n and s[start] == s[end]:
        end += 1
    compressed += s[start] + str(end - start)

print(compressed)
