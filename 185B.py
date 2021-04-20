# 解けなかった、ロジックがごちゃついた
# 落ち着いてやったら解けそう
# 下のは https://qiita.com/u2dayo/items/8093ba359a66f75e7634#b%E5%95%8F%E9%A1%8Csmartphone-addiction
# -*- coding: utf-8 -*-
def solve():
    rem = N  # 残りのバッテリー残量
    prev = 0  # 直前のカフェ（or スタート地点）を出た時間

    for _ in range(M):
        a, b = map(int, input().split())
        rem -= a - prev  # 直前のカフェ（or スタート地点）を出てからの経過時間だけバッテリーが減ります
        if rem <= 0:
            # カフェにつく前にバッテリーが0になる場合、"No"です（0ちょうどもアウト）
            return False
        rem += b - a  # カフェの滞在時間分、バッテリーが回復します
        rem = min(N, rem)  # バッテリー残量は上限Nを超えないことに注意しましょう
        prev = b  # 時刻bにカフェを出ます

    rem -= (T - prev)  # 時刻Tに自宅に帰るまでが遠足です
    if rem <= 0:
        return False
    return True


N, M, T = map(int, input().split())

if solve():
    print("Yes")
else:
    print("No")
