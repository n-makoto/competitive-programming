# 三重ループして足していく解法も一瞬考えたが計算量の無駄なので
# 愚直に分岐を三連結させて解いた
# -*- coding: utf-8 -*-
A, B, C, K = map(int, input().split())
res = 0
if K >= A:
    res += A * 1
    K -= A
else:
    res += K
    print(res)
    exit()

if K >= B:
    K -= B
else:
    print(res)
    exit()

if K >= C:
    res += C * -1
    K -= C
else:
    res += K * -1
    print(res)
    exit()

print(res)
