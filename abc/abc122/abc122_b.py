s = input()
acgt = "ACGT"
c = 0
c_max = 0

for i in s:
    if i in acgt:
        c += 1
        if c > c_max:
            c_max = c
    else:
        c = 0

print(c_max)
