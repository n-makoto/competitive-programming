# -*- coding: utf-8 -*-
N, K = map(int, input().split())
ans = 0
fruits = list(map(int, input().split()))
fruits = sorted(fruits)
for i in range(K):
    if i > len(fruits) - 1:
        break
    ans += fruits[i]
print(ans)
