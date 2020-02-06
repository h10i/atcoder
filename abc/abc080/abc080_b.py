def calc_digit_sum(num):
    x = num
    digit_sum = 0

    while x > 0:
        digit_sum += x % 10
        x //= 10

    return digit_sum

N = int(input())

if N % calc_digit_sum(N) == 0:
    is_harshad_number = "Yes"
else:
    is_harshad_number = "No"

print(is_harshad_number)
