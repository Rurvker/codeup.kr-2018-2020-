n = int(input())
for i in range(0, n):
    print('*', end='')
print()
for i in range(1, n-1):
    for j in range(0, n):
        if (j == 0) or (j == i) or (j == n-1) or (j == n-i-1):
            print('*', end='')
        else:
            print(' ', end='')
    print()
for i in range(0, n):
    print('*', end='')
print()
