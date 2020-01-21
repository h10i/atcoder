def calc(x, y, op):
    if op == "+":
        res = x + y
    elif op == "-":
        res = x - y
    return res


s = input()

a, b, c, d = map(int, s)
operand = ["+", "-"]
ans = ""

for op1 in operand:
    res1 = calc(a, b, op1)
    for op2 in operand:
        res2 = calc(res1, c, op2)
        for op3 in operand:
            res3 = calc(res2, d, op3)
            if res3 == 7:
                ans = "{}{}{}{}{}{}{}=7".format(a, op1, b, op2, c, op3, d)
                break
        else:
            continue
        break
    else:
        continue
    break

print(ans)
