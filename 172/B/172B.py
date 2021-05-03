# -*- coding: utf-8 -*-
S = input()
T = input()
count = 0
for i, v in enumerate(S):
    if v != T[i]:
        count += 1
print(count)
