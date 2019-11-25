def is_all_even(ary, n):
    for i in range(n):
        if ary[i] % 2 == 1:
            return False
    return True

N = int(input())
A = list(map(int, input().split()))
count = 0

while is_all_even(A, N):
    for i in range(N):
        A[i] //= 2
    count += 1

print(count)
