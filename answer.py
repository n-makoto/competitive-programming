# -*- coding: utf-8 -*-
N = int(input())  # 長さ（2Nでlen(S)になる）
S = list(input())  # 文字列
Q = int(input())  # クエリの数
reverse = False
for i in range(Q):
    T, A, B = map(int, input().split())
    if T == 1:
        # A -= 1
        # B -= 1
        if reverse:
            a_i = A+N if A <= N else A-N
            b_i = B+N if B <= N else B-N
            print(a_i, b_i)
            tmp = S[a_i]
            S[a_i] = S[b_i]
            S[b_i] = tmp
        else:
            tmp = S[A]
            S[A] = S[B]
            S[B] = tmp
    else:
        reverse = not reverse

print("".join(S))
