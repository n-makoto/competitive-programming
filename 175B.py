# 組み合わせを取る問題の場合、rangeの始点を親のインデックス+1にする
# これによって、(0,1,2), (0,1,3), (0,2,3)... など、一度出た組み合わせを避けながらループすることができる
# -*- coding: utf-8 -*-
N = int(input())
arr = list(map(int, input().split()))
ans = 0
for i in range(N):
    for j in range(i+1, N):
        for k in range(j+1, N):
            if arr[i] == arr[j] or arr[i] == arr[k] or arr[j] == arr[k]:
                continue
            if arr[i] + arr[j] <= arr[k] or arr[i] + arr[k] <= arr[j] or arr[j] + arr[k] <= arr[i]:
                continue
            ans += 1
print(ans)
