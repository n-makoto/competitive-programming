# -*- coding: utf-8 -*-
N, M = map(int, input().split())
A = list(map(int, input().split()))
ans = N
for i in A:
    ans -= i
    if ans < 0:
        ans = -1
        break
print(ans)
