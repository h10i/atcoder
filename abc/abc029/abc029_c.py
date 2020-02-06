N = int(input())

passwords = []


def generate_password(password):
    if len(password) == N:
        passwords.append(password)
    else:
        generate_password(password + "a")
        generate_password(password + "b")
        generate_password(password + "c")


generate_password("")

for password in passwords:
    print(password)
