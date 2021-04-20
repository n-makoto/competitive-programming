# -*- coding: utf-8 -*-
s = input()
result = 0
nums = [int(c) for c in s]
for num in nums:
    if num == 1:
        result += 1

print(result)
