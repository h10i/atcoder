N, K = map(int, input().split())
l = list(map(int, input().split()))

l.sort(reverse=True)
length = sum(l[:K])

print(length)
