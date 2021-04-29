# -*- coding: utf-8 -*-
A = list(map(int, input().split()))
A.extend(list(map(int, input().split())))
A.extend(list(map(int, input().split())))

N = int(input())
checked = [False] * 9
for i in range(N):
    b = int(input())
    if b in A:
        checked[A.index(b)] = True

# 縦列全部走査、横列全部走査、ななめ（11,22,33と13,22,31）をチェック
ans = "No"
# 縦: 0,3,6 1,4,7 2,5,8
if checked[0] and checked[3] and checked[6]:
    ans = "Yes"
elif checked[1] and checked[4] and checked[7]:
    ans = "Yes"
elif checked[2] and checked[5] and checked[8]:
    ans = "Yes"
# 横: 0,1,2 3,4,5 6,7,8
if checked[0] and checked[1] and checked[2]:
    ans = "Yes"
elif checked[3] and checked[4] and checked[5]:
    ans = "Yes"
elif checked[6] and checked[7] and checked[8]:
    ans = "Yes"
# 斜: 0,4,8 2,4,6
if checked[0] and checked[4] and checked[8]:
    ans = "Yes"
elif checked[2] and checked[4] and checked[6]:
    ans = "Yes"
print(ans)
