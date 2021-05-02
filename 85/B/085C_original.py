# -*- coding: utf-8 -*-
from math import floor
n, y = map(int, input().split())

a = floor(y / 10000)
b = floor(y / 5000)
c = floor(y / 1000)

ans = ""

for i in range(a+1):
    for j in range(b+1):
        for k in range(c+1):
            if i+j+k == n and i*10000 + j*5000 + k*1000 == y:
                ans = "{} {} {}".format(i, j, k)
                break
        else:
            continue
        break
    else:
        continue
    break

if not ans:
    ans = "-1 -1 -1"

print(ans)
