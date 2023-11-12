#!/usr/bin/python3
if __name__ == "__main__":
    import sys
    argc = len(sys.argv) - 1
    if argc == 0:
        print("{} arguments.".format(argc))
    else:
        print("{} {}:".format(argc, "arguments" if argc > 1 else "argument"))
        for i in range(1, argc + 1):
            print("{}: {}".format(i, sys.argv[i]))

