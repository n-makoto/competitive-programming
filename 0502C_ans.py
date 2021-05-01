# -*- coding: utf-8 -*-
N = int(input())
A = [tuple(map(int, input().split())) for i in range(N)]
print(A)


def check(x):
    s = set()
    for a in A:
        ii = sum(1 << i for i in range(5) if a[i] >= x)
        s.add(ii)
        print("s: {}, ii: {}".format(s, ii))
    for x in s:
        for y in s:
            for z in s:
                if x | y | z == 31:
                    return True
    return False


ok = 0
ng = 10**9 + 1
while ng - ok > 1:
    cen = (ok + ng) // 2
    if check(cen):
        ok = cen
    else:
        ng = cen
print(ok)
