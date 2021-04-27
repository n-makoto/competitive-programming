# -*- coding: utf-8 -*-
N, D = map(int, input().split())
ans = 0
for i in range(N):
    X, Y = map(int, input().split())
    if ((X ** 2) + (Y ** 2)) ** 0.5 <= D:
        ans += 1
print(ans)
