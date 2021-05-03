# -*- coding: utf-8 -*-
S = input()
if S != S[::-1]:
    print("No")
    exit()

S = list(S)
i = int((len(S)-1)/2)
T = S[0:i]
if T != T[::-1]:
    print("No")
    exit()

j = int((len(S)+3)/2)-1
U = S[j:len(S)]
if U != U[::-1]:
    print("No")
    exit()

print("Yes")
