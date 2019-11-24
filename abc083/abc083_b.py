def calc_digit_sum(num):
    length = len(str(num))
    digit_sum = 0

    for i in range(1, length + 1):
        digit_sum += num % 10
        num //= 10

    return digit_sum

N, A, B = map(int, input().split())
ans = 0

for i in range(1, N + 1):
    digit_sum = calc_digit_sum(i)

    if digit_sum >= A and digit_sum <= B:
        ans += i

print(ans)
