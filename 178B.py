# 納得いかず
# https://atcoder.jp/contests/abc178/editorial/102
# a, b, d, dの値が正負やゼロの組み合わせによって最適が変わるはずであるのに
# a*c, a*d, b*c,b*dの中の最大値と言ってしまえるのがわからない,シチュエーションによっては存在しない組み合わせがあるのかと思っていた。
# うーん、a,b,c,dはどんな値の組み合わせでも一様に存在するのだから↑の組み合わせの最大を取ればいつでも最大は出ますよね、という考え方？
# -*- coding: utf-8 -*-
a, b, c, d = map(int, input().split())
print(max(max(a*c, a*d), max(b*c,b*d)))
