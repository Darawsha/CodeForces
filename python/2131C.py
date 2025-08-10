import sys
input = sys.stdin.readline

t = int(input())
for _ in range(t):
    n, k = map(int, input().split())
    S = list(map(int, input().split()))
    T = list(map(int, input().split()))

    freqS = {}
    freqT = {}

    for x in S:
        r = x % k
        freqS[r] = freqS.get(r, 0) + 1
    for x in T:
        r = x % k
        freqT[r] = freqT.get(r, 0) + 1

    residues = set(freqS.keys()) | set(freqT.keys())
    visited = set()
    possible = True

    for r in residues:
        if r in visited:
            continue
        opp = (k - r) % k
        s_count = freqS.get(r, 0) + (freqS.get(opp, 0) if opp != r else 0)
        t_count = freqT.get(r, 0) + (freqT.get(opp, 0) if opp != r else 0)
        if s_count != t_count:
            possible = False
            break
        visited.add(r)
        visited.add(opp)

    print("YES" if possible else "NO")
