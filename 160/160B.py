# -*- coding: utf-8 -*-
X = int(input())
remain = X
ans = 0
if remain % 500 >= 0:
    ans += (remain // 500) * 1000
    remain = remain % 500
    ans += (remain // 5) * 5
else:
    ans += (remain // 5) * 5
print(ans)
