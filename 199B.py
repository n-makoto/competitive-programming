# -*- coding: utf-8 -*-
N = int(input())
A = list(map(int, input().split()))
B = list(map(int, input().split()))
arr = []
for i, v in enumerate(A):
    nums = []
    for j in range(v, B[i]+1):
        nums.append(j)
    if i == 0:
        arr = set(nums)
    else:
        s_nums = set(nums)
        arr = arr & s_nums

print(len(arr))
