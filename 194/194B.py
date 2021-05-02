# -*- coding: utf-8 -*-
# 整数の入力
n = int(input())
a_list = []
b_list = []
for i in range(n):
    a, b = map(int, input().split())
    a_list.append(a)
    b_list.append(b)

answer = 10**6
for i in range(n):
    for j in range(n):
        if i == j:
            answer = min(answer, a_list[i] + b_list[j])
        else:
            answer = min(answer, max(a_list[i], b_list[j]))
print(answer)
