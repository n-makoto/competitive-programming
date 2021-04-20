# -*- coding: utf-8 -*-
card_count = int(input())
n = list(map(int, input().split()))

alice = 0
bob = 0

is_alice_turn = True
for i in sorted(n, reverse=True):
    if is_alice_turn:
        alice += i
    else:
        bob += i
    is_alice_turn = not is_alice_turn

result = alice - bob
print(result)
