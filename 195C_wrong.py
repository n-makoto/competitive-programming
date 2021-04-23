# ある数を3桁区切りに分解した上でその個数を足していけばよい？
# わからん
# -*- coding: utf-8 -*-
N = int(input())
s = "{:,}".format(N)
comma_lv = s.count(",")
ans = 0
if 1000000 > N >= 1000:
    ans += (N - 1000 + 1) * 1
elif 1000000000 > N >= 1000000:
    ans += (N - 1000 + 1) * 1
    ans += (N - 1000000 + 1) * 2
elif 1000000000000 > N >= 1000000000:
    ans += (N - 1000 + 1) * 1
    ans += (N - 1000000 + 1) * 2
    ans += (N - 1000000000 + 1) * 3
elif N >= 1000000000000:
    ans += (N - 1000 + 1) * 1
    ans += (N - 1000000 + 1) * 2
    ans += (N - 1000000000 + 1) * 3
    ans += (N - 1000000000000 + 1) * 4
print(ans)
# 最初に書いてたやつ
# N = int(input())
# comma_sum = 0
# num_5 = 1000000000000000  # 16桁 カンマ5個
# comma_5 = False
# num_4 = 1000000000000  # 13桁
# sum_4_to_5 = (num_5 - num_4 + 1) * 4
# comma_4 = False
# num_3 = 1000000000  # 10桁
# sum_3_to_4 = (num_4 - num_3 + 1) * 3
# comma_3 = False
# num_2 = 1000000  # 7桁
# sum_2_to_3 = (num_3 - num_2 + 1) * 2
# comma_2 = False
# num_1 = 1000  # 4桁
# sum_1_to_2 = (num_2 - num_1 + 1) * 1
# comma_1 = False
#
# if num_5 >= N >= num_4:
#     sum_N_to_5 = (num_5 - N + 1) * 4
#     print(sum_1_to_2 + sum_2_to_3 + sum_3_to_4 + sum_N_to_5)
# if num_4 >= N >= num_3:
#     sum_N_to_4 = (num_4 - N + 1) * 3
#     print(sum_1_to_2 + sum_2_to_3 + sum_N_to_4)
# if num_3 >= N >= num_2:
#     sum_N_to_3 = (num_3 - N + 1) * 2
#     print(sum_1_to_2 + sum_N_to_3)
# elif num_2 >= N >= num_1:
#     print(N - num_1 + 1)

