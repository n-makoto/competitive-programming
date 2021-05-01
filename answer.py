# nibutan
# -*- coding: utf-8 -*-
N = int(input())
A = [tuple(map(int, input().split())) for i in range(N)]
print(A)


def check(x):
    s = set()
    for a in A:
        # ii = sum(1 << i for i in range(5) if a[i] >= x)
        ii = 0
        for i in range(5):
            if a[i] >= x:
                # print('koeta~~!: ', a[i])
                # print('kimyou ', 1 << i)
                ii += 1 << i
        s.add(ii)
        # print("s: {}, ii: {}".format(s, ii))
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
        print("cen: {}, ok: {}, ng: {}, yoi".format(cen, ok, ng))
    else:
        ng = cen
        print("cen: {}, ok: {}, ng: {}, akan".format(cen, ok, ng))
print(ok)
