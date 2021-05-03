`# -*- coding: utf-8 -*-
a = int(input())  # 500
b = int(input())  # 100
c = int(input())  # 50
x = int(input())  # 金額
results = []

al = []
if a != 0:
    for i in range(a+1):
        al.append(i * 500)

bl = []
if b != 0:
    for i in range(b+1):
        bl.append(i * 100)

cl = []
if c != 0:
    for i in range(c+1):
        cl.append(i * 50)

# print(a, b, c, x)
# print(al, bl, cl)

for i in al:
    remain = x
    if remain >= i:
        remain -= i
        if remain == 0:
            results.append([i, 0, 0])
    else:
        break
    for j in bl:
        j_remain = remain
        if j_remain >= j:
            j_remain -= j
            if j_remain == 0:
                results.append([i, j, 0])
        else:
            break
        for k in cl:
            k_remain = j_remain
            if k_remain >= k:
                k_remain -= k
                if k_remain == 0:
                    results.append([i, j, k])
            else:
                break
            # print("i:{}, j:{}, k:{}, remain:{}".format(i, j, k, k_remain))

answer = list(map(list, set(map(tuple, results))))
print(len(answer))
