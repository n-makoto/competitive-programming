# -*- coding: utf-8 -*-
S = input()
T = ""
for i in S:
    if i == "R":
        T = T[::-1]
    else:
        T += i
before = T[0]
ans = ""
current = 1
while current != len(T):
    if T[current] == before:
        T = T[:current-1] + T[current+1:]
        before = ""
        current = 0
    else:
        before = T[current]
        current += 1
print(T)
