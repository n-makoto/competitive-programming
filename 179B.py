# コメントと所要時間書きたい
# -*- coding: utf-8 -*-
N = int(input())
streak = 0
ans = "No"
for i in range(N):
    D1, D2 = map(int, input().split())
    if D1 == D2:
        streak += 1
        if streak == 3:
            ans = "Yes"
            break
    else:
        streak = 0
print(ans)
