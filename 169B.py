# 制約を見てマイナスが存在しないことを確認する
# 今回は昇順にソートしたが降順にソートする方が計算量を少なくできる
# が、その場合はループを回す前に配列に0が含まれているかチェックする必要がある

# -*- coding: utf-8 -*-
N = int(input())
A = sorted(list(map(int, input().split())))
result = 0
for i, v in enumerate(A):
    if i == 0:
        result = v
        continue
    result *= v
    if result > 10 ** 18:
        result = -1
        break

print(result)
