# -*- coding: utf-8 -*-
from decimal import Decimal, ROUND_HALF_UP

a, b = map(int, input().split())
print(Decimal((1-(b/a))*100).quantize(Decimal('0.0'), rounding=ROUND_HALF_UP))
