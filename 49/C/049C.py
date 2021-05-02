# 一番めんどくさい単語からreplaceを順次かけていって空文字を目指す
# -*- coding: utf-8 -*-
s = input()
replaced = s.replace('eraser', '').replace('erase', '').replace('dreamer', '').replace('dream', '')
ans = "YES" if not replaced else "NO"
print(ans)
