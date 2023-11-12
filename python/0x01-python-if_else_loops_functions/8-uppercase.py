#!/usr/bin/python3

def uppercase(str):
    """Print string in uppercase format

    Args:
        str: String to be transformed
    """
    for i in range(0, len(str)):
        char = str[i]
        if ord(char) >= 97 and ord(char) <= 122:
            char = chr(ord(char) - 32)
        print("{}".format(char), end="")
        if i >= (len(str) - 1):
            print()