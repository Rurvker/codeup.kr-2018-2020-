n, m = map(int, input().split())
for i in range(0, n):
    for j in range(0, n*m, n):
        print(n*m-i-j, end=' ')
    print()
