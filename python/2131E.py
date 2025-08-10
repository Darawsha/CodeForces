t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    c = [0] * n

    if a[-1] != b[-1]:
        print("NO")
        continue

    possible = True
    for i in range(n-2, -1, -1):
        if a[i] == b[i]:
            continue
        if b[i] == (a[i] ^ a[i+1]):
            c[i] = 1
            continue
        if i + 1 < n - 1 and c[i+1]:
            a[i+1] ^= a[i+2]
        if b[i] == (a[i] ^ a[i+1]):
            c[i] = 1
            continue
        possible = False
        break

    print("YES" if possible else "NO")
