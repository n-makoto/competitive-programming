# -*- coding: utf-8 -*-
# 整数の入力
n = int(input())
result = 10**10
for i in range(n):
    a, p, x = map(int, input().split())
    a = a - 0.5
    x = x - 1
    if a < x:
        result = min(result, p)

if result == 10**10:
    result = -1

print(result)
