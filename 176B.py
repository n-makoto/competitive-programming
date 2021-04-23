# -*- coding: utf-8 -*-
N = input()
res = 0
for n in N:
    res += int(n)
print("Yes" if res % 9 == 0 else "No")
