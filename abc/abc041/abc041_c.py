N = int(input())
a = list(map(int, input().split()))

students = [None] * N

for i in range(N):
    students[i] = (i + 1, a[i])

for student in sorted(students, key=lambda x: -x[1]):
    print(student[0])
