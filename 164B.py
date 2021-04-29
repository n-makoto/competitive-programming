# -*- coding: utf-8 -*-
A, B, C, D = map(int, input().split())
t = True
while A > 0 and C > 0:
    if t:
        C -= B
        t = False
    else:
        A -= D
        t = True
print("Yes" if C <= 0 else "No")
