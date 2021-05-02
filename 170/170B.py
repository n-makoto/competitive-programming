# -*- coding: utf-8 -*-
x, y = map(int,input().split())
a = (x * 4 - y) / 2
b = (x * -2 + y) / 2
if a % 1 == 0 and a >= 0 and b % 1 == 0 and b >= 0:
    print("Yes")
else:
    print("No")
