# 9分
# 配列として持たず、個別に判定してNoの時点でbreakさせるのがポイント
# -*- coding: utf-8 -*-
s = list(input())
result = 'Yes'
for i in range(len(s)):
    if i % 2 != 0 and s[i].islower():
        result = "No"
        break
    elif i % 2 == 0 and not s[i].islower():
        result = "No"
        break

print(result)
