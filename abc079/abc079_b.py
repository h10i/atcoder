def calc_lucas_num(n):
    if n == 0:
        return 2
    elif n == 1:
        return 1

    cache = [2, 1]
    lucas_num = 0

    for _ in range(1, n):
        lucas_num = cache[1] + cache[0]
        cache[0], cache[1] = cache[1], lucas_num

    return lucas_num

N = int(input())

print(calc_lucas_num(N))
