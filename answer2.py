# Cmondai
# -*- coding: utf-8 -*-
N = int(input())
A_lis = []
B_lis = []
C_lis = []
D_lis = []
E_lis = []
for i in range(N):
    A, B, C, D, E = map(int, input().split())
    A_lis.append(A)
    B_lis.append(B)
    C_lis.append(C)
    D_lis.append(D)
    E_lis.append(E)
team = []
for i in range(N):
    mem = [A_lis[i], B_lis[i], C_lis[i], D_lis[i], E_lis[i]]
    if i < 3:
        team.append(mem)
        continue
    print("team: {}, mem: {}".format(team, mem))
# max_A = max(A_lis)
# max_B = max(B_lis)
# max_C = max(C_lis)
# max_D = max(D_lis)
# max_E = max(E_lis)
# print(max_A, max_B, max_C, max_D, max_E)
