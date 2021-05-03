# なるべく小数点が入らないように式変形をする（可能な場合は）
# 割合は特に /100することが多そう、その代わりに左辺を*100する
# -*- coding: utf-8 -*-
# スペース区切りの整数の入力
n, x = map(int, input().split())  # n = 飲んだお酒の杯数, X = アルコールの許容摂取量(ml)
s = 0
for i in range(n):
    v, p = map(int, input().split())  # v = お酒の量(ml), p = アルコールの度数(%)
    s += v * p
    if s > x * 100:
        print(i+i)
        exit()
print(-1)
