# -*- coding: utf-8 -*-

def base10int(value, base):
    if (int(value / base)):
        return base10int(int(value / base), base) + str(value % base)
    return str(value % base)


N, K = map(int, input().split())
print(len(str(base10int(N, K))))
