# -*- coding: utf-8 -*-
N, K = map(int, input().split())
A = [0] * N
for i in range(K):
    d = int(input())
    B = list(map(int, input().split()))
    for j in B:
        A[j - 1] += 1
print(A.count(0))
