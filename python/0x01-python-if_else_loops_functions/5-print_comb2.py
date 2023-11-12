#!/usr/bin/python3
for i in range(0, 100):
    print("{}{}{}".format(('0' if i <= 9 else ''), i, (', ' if i < 99 else "\n")), end="")