# -*- coding: utf-8 -*-
H, W = map(int, input().split())  # H = 縦のマス数, W = 横のマス数
blocks = []
for i in range(H):
    block = list(map(int, input().split()))
    for j in range(W):
        blocks.append(block[j])
min_bl = min(blocks)
ans = 0
for bl in blocks:
    if bl != min_bl:
        ans += bl - min_bl
print(ans)
# 全体のマスのなかで最小ブロック数を探して、それとの差分をどんどん足していけばよさそう
