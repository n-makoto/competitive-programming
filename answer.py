# 愚直にターン制でwhile回してたらTLE出たけど, 紙にパターンを書いてみたら計算で解く解法が浮かんだので解けた
# 問題のサンプル出力を順に紙に書きながら法則性を探すのが大事そう
# あとこれは制約が10*18なので回したら解けなさそうと気づきたい
# -*- coding: utf-8 -*-
N, A, B = map(int, input().split())
set_count = N // (A + B)
ans = set_count * A
amari = N - (set_count * (A + B))
if amari >= A:
    ans += A
else:
    ans += amari
print(ans)
