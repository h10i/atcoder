s = ["Sunny", "Cloudy", "Rainy"]
S = input()

print(s[(s.index(S) + 1) % 3])
