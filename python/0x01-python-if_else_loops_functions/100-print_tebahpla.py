#!/usr/bin/python3

"""
    Write a program that prints the ASCII alphabet, in reverse order, alternating lowercase and uppercase (z in lowercase and Y in uppercase) , not followed by a new line.

    You can only use one print function with string format
    You can only use one loop in your code
    You are not allowed to store characters in a variable
    You are not allowed to import any module

    first cond ===> i == 122

    second cond ===> i - 32 121 -  32
    
    [z, Y, x, W, v, U, t, S, r, Q, p, O, n, M, l, K, j, I, h, G, f, E, d, C, b, A]

    [122, 121, 120, 119, 118, 117, 116, 115, 114, 113, 112, 111, 110, 109, 108, 107, 106, 105, 104, 103, 102, 101, 100, 99, 98, 97]

"""

for i in range(122, 96, -1):
    print("{}".format(chr(i) if i % 2 == 0 else chr(i - 32)), end="")