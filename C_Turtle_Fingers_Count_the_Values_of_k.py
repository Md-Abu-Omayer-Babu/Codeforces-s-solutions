import math

tc = int(input())
for t in range(tc):
    a, b, l = map(int, input().split())

    lg_a = int(math.log(l) / math.log(a))
    lg_b = int(math.log(l) / math.log(b))

    st = set()

    for i in range(lg_a + 2):
        for j in range(lg_b + 2):
            m = a ** i
            n = b ** j

            if (m * n) <= l and l % (m * n) == 0:
                st.add(m * n)
    
    print(len(st))
