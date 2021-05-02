# 直線の傾きの公式 (y2 - y1) / (x2 - x1)
# なぜこの二重ループですべての点の組み合わせが網羅できるのか、まるでわからない
# -*- coding: utf-8 -*-
# 整数分スペース区切りの整数を入力する
N = int(input())
A = [tuple(map(int, input().split())) for i in range(N)]
ans = 0
for i in range(N):
    for j in range(i):
        if abs(A[i][1] - A[j][1]) <= abs(A[i][0] - A[j][0]):
            ans += 1

print(ans)
