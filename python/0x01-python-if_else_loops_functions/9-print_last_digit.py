#!/usr/bin/python3

def print_last_digit(number):
    """Print and return last degit of given number in cli
    
    Args:
        number: the given number
    
    Returns:
        last digit of number
    """
    number = abs(number) % 10

    print("{}".format(number), end="")
    return number