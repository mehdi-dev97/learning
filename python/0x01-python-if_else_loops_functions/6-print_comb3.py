#!/usr/bin/python3

"""Create combination of two digits"""
for x in range(0, 9):
    for y in range((x + 1), 10):
        if x != 8:
            print("{}{}".format(x, y), end=", ")
        else:
            print("{}{}".format(x, y))
