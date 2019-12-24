N = int(input())
A = list(map(int, input().split()))

B = [0] + A + [0]
total = 0

for i in range(1, N + 2):
    total += abs(B[i] - B[i - 1])

for i in range(1, N + 1):
    b = B[i]
    b_next = B[i + 1]
    b_prev = B[i - 1]
    ans = total - (abs(b - b_prev) + abs(b_next - b)) + abs(b_next - b_prev)
    print(ans)
