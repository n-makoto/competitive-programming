# なんでｈの最大値を最大の高さの遮蔽物とみなしてそことの直線をとるとダメなのかさっぱり
# -*- coding: utf-8 -*-
N, D, H = map(int, input().split())
ans = 0.0
for i in range(N):
    d, h = map(int, input().split())
    y = ((H-h)/(D-d)) * (0-d) + h
    if y > ans:
        ans = y
if ans < 0:
    ans = 0.0
print(ans)
