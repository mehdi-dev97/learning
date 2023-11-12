#!/usr/bin/python3
def islower(char):
    """Check char is lower or not"""
    for lower_code in range(97, 123):
        if lower_code == ord(char):
            return True
    return False
