# -*- coding: utf-8 -*-
N, M = map(int, input().split())
ans = []
A = list(map(int, input().split()))
total = sum(A)
for i in sorted(A, reverse=True):
    if i < total * (1 / (4 * M)) or len(ans) >= M:
        break
    else:
        ans.append(i)
print("Yes" if len(ans) >= M else "No")
