import math

def build_sieve(max_n):

    sieve = [True] * (max_n + 1)
    sieve[0] = sieve[1] = False
    for i in range(2, int(math.sqrt(max_n)) + 1):
        if sieve[i]:
            for j in range(i * i, max_n + 1, i):
                sieve[j] = False
    return sieve

def is_t_prime(x, sieve):
    sqrt_x = int(math.sqrt(x))
    if sqrt_x * sqrt_x != x:
        return False
    return sqrt_x <= 10**6 and sieve[sqrt_x]

sieve = build_sieve(10**6)

n = int(input())
x = list(map(int, input().split()))

for num in x:
    print("YES" if is_t_prime(num, sieve) else "NO")
