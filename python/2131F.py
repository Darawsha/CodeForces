import sys
import bisect

input = sys.stdin.readline

t = int(input())
for _ in range(t):
    n = int(input())
    a = input().strip()
    b = input().strip()

    A0 = [0]*(n+1)
    A1 = [0]*(n+1)
    B0 = [0]*(n+1)
    B1 = [0]*(n+1)

    for i in range(1, n+1):
        A0[i] = A0[i-1] + (a[i-1] == '0')
        A1[i] = i - A0[i]
        B0[i] = B0[i-1] + (b[i-1] == '0')
        B1[i] = i - B0[i]

    D = [A0[i] - A1[i] for i in range(1, n+1)]
    E = [B0[i] - B1[i] for i in range(1, n+1)]

    E_sorted = sorted(E)
    D_sorted = sorted(D)

    sumA0 = sum(A0[1:])
    sumA1 = sum(A1[1:])
    sumB0 = sum(B0[1:])
    sumB1 = sum(B1[1:])

    count_y_ge_negD = []
    for dx in D:
        pos = bisect.bisect_left(E_sorted, -dx)
        count_y_ge_negD.append(n - pos)

    count_x_ge_negE = []
    for ey in E:
        pos = bisect.bisect_left(D_sorted, -ey)
        count_x_ge_negE.append(n - pos)

    res = 0

    for i in range(n):
        cy = count_y_ge_negD[i]
        res += A1[i+1]*cy + A0[i+1]*(n - cy)

    for j in range(n):
        cx = count_x_ge_negE[j]
        res += B1[j+1]*cx + B0[j+1]*(n - cx)

    print(res)
