# -*- coding: utf-8 -*-
N = int(input())
A = list(map(int, input().split()))

max_gcd_number = -1
max_gcd = 0
for i in range(2, 1000 + 1):
    count = 0
    for j in A:
        if j % i == 0:
            count += 1
    if count > max_gcd:
        max_gcd = count
        max_gcd_number = i
        if count == len(A):
            break

print(max_gcd_number)
