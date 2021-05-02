# -*- coding: utf-8 -*-
a, b = map(int, input().split())
c = a + b
if c >= 15 and b >= 8:
    print(1)
elif 15 > c >= 10 and 8 > b >= 3:
    print(2)
elif 10 > c >= 3 and 3 > b:
    print(3)
else:
    print(4)
