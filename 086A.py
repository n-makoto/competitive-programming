# -*- coding: utf-8 -*-
a, b = map(int, input().split())
result = a * b % 2
answer = "Even" if result == 0 else "Odd"
# 出力
print(answer)
