# -*- coding: utf-8 -*-
S = input()
T = input()
start = 0
end = len(T)
most_similar_point = 0
while True:
    if len(T) > len(S[start:end]):
        break
    substr = S[start:end]
    similar_point = 0
    for i, v in enumerate(substr):
        if v == T[i]:
            similar_point += 1
    if similar_point > most_similar_point:
        most_similar_point = similar_point
    start += 1
    end += 1
print(len(T) - most_similar_point)
