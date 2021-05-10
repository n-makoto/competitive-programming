# サクッと解答を書き始めるためのシェルスクリプト
# TODO: 難易度も引数で渡せるようにする
#!/bin/sh
cd ~/IdeaProjects/atcoder/$1/C
cp ~/IdeaProjects/atcoder/template/main.cpp ./
oj d https://atcoder.jp/contests/abc$1/tasks/abc$1_c
code ./main.cpp