# -*- coding: utf-8 -*-
N = int(input())
ans = "APPROVED"
A = list(map(int, input().split()))
for j in A:
    if j % 2 != 0:
        continue
    else:
        if j % 3 == 0 or j % 5 == 0:
            continue
        else:
            ans = "DENIED"
            break
print(ans)
