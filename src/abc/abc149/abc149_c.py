def isPrime(num):

    for i in range(2, int(num ** 0.5) + 1):
        if num % i == 0:
            return False

    return True


X = int(input())
n = X

while True:
    if isPrime(n):
        break
    n += 1

print(n)
