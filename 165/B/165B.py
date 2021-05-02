# -*- coding: utf-8 -*-
X = int(input())
current = 100
count = 0
while current < X:
    current = current * 1.01 // 1
    count += 1
print(count)
