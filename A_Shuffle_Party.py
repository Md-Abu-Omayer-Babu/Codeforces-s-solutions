def position(n):
    if n == 1 or (n & (n - 1)) == 0:
        return n
    pos = 1
    while pos * 2 <= n:
        pos *= 2
    return pos

t = int(input())

for _ in range(t):
    n = int(input())
    print(position(n))
