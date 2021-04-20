# *によって配列を展開してスペース区切りで出力できる
# -*- coding: utf-8 -*-
n, x = map(int, input().split())
a = list(map(int, input().split()))
# リスト内包表記でfiltering
print(*[i for i in a if i != x])
