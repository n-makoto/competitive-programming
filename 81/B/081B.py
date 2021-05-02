# -*- coding: utf-8 -*-
line_count = int(input())
a = list(map(int, input().split()))

count = 0


def calc_half(n):
    return n / 2


while all((x % 2 == 0 for x in a)):
    a = list(map(calc_half, a))
    count += 1

print(count)


