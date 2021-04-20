# -*- coding: utf-8 -*-
# 整数の入力
lines = int(input())
plans = []
result = "No"

for i in range(lines):
    t, x, y = map(int, input().split())
    # 2秒後に [100, 100] にいることはあり得ない
    if x + y > t:
        break
    else:
        plans.append([t, x, y])

for i in plans:
    for j in range(i[0]):


print(plans)
