#!/usr/bin/python3

def remove_char_at(str, n):
    """Remove char from string by given index

    Args:
        str: string
        n: char index to be remove
    
    Return:
        String with no given index char
    """
    result = ""
    for i in range(0, len(str)):
        if i != n:
            result += str[i]

    return result