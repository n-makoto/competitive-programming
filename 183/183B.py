# 2点の座標から1次方程式（y = ax + b (aは傾き, bは切片)）を求める公式がある
# → http://www.geisya.or.jp/~mwm48961/koukou/tyoku13.htm
# 座標が(a, b), (c, d)のとき、
# y - b = ((d-b)/(c-a)) * (x -a)
# ↑を展開して → y = ((d-b)/(c-a)) * (x -a) + b
# で、yは0であることが問題よりわかっているので、
# xが一意に求まる。
# -*- coding: utf-8 -*-
Sx, Sy, Gx, Gy = map(float, input().split()) # Sx = Start X座標, Gx = Goal X座標
print(Sx, Sy, Gx, Gy)
res = ((Sx * Gy) + (Gx * Sy))/(Sy+Gy)
print(res)
