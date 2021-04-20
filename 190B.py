# -*- coding: utf-8 -*-
n, s, d = map(int, input().split())  # n = 呪文の種類, s = 詠唱時間制限(<), d = 最低威力(>)
result = "No"
for i in range(n):
    x, y = map(int, input().split())  # x = 詠唱時間, y = 威力
    if x < s and y > d:
        result = "Yes"
        break

print(result)
