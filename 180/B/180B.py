# -*- coding: utf-8 -*-
N = int(input())
A = list(map(int, input().split()))
man = 0
euq = 0
cheb = 0
for i in A:
    ab = abs(i)
    man += ab
    euq += ab**2
    if ab > cheb:
        cheb = ab
print(man,euq**0.5,cheb, sep="\n")
