a =input().split()
odd=0
even=0
for i in range(0,len(a)):
    if (int(a[i])%2==1):
        if (int(a[i])>odd):
            odd=int(a[i])
    else:
        if (int(a[i])>even):
            even=int(a[i])
if even==0:
    print(str(odd))
else:
    if odd==0:
        print(str(even))
    else:
        print(str(odd)+' '+str(even))
