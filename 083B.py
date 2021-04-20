# 解けた

# -*- coding: utf-8 -*-
from functools import reduce
n, a, b = map(int, input().split())
s = 0


def add_func(aa, bb):
    return aa+bb


for i in range(n+1):
    y = list(map(int, list(str(i))))
    z = reduce(add_func, y)
    if a <= z <= b:
        s += i

print(s)
