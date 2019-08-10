k, x = map(int, input().split())
lst = [str(i) for i in range(x - k + 1, x + k) if i >= -1000000 and i <= 1000000]
print(" ".join(lst))
