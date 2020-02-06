n = int(input())
v = list(map(int, input().split()))


even = [0] * (10 ** 5)
odd = [0] * (10 ** 5)

for i in range(0, n, 2):
    even[v[i] - 1] += 1

for i in range(1, n, 2):
    odd[v[i] - 1] += 1

even_max = max(even)
odd_max = max(odd)

even_max_i = even.index(even_max)
odd_max_i = odd.index(odd_max)

if even_max_i == odd_max_i:
    even[even_max_i] = 0
    odd[odd_max_i] = 0

    even_max_2 = max(even)
    odd_max_2 = max(odd)

    ans = n - max(even_max + odd_max_2, even_max_2 + odd_max)
else:
    ans = n - (even_max + odd_max)

print(ans)
