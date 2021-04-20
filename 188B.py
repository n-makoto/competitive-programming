# 問題読み間違えてた
# Nを個数だと思っていたがNは次元で個数は2個固定だった...
# -*- coding: utf-8 -*-
n = int(input())
s = list(map(int, input().split()))
t = list(map(int, input().split()))
result = []
for i in range(len(s)):
    result.append(s[i] * t[i])
print("Yes" if sum(result) == 0 else "No")
