# -*- coding: utf-8 -*-
# 和の公式という。
# 1からnの和 = n*(n+1)/2
# Aも出したうえで差分を求めることで、間の数値を出せることが学び
N = int(input())
ans = 0
for i in range(N):
    a, b = map(float, input().split())
    # a までの数の和にはa自身を含めちゃいけないので、公式は (a-1)*a / 2になる
    ans += b * (b + 1) / 2 - a * (a - 1) / 2
    # ans += b * (b + 1) // 2 - a * (a - 1) // 2
print(int(ans))
