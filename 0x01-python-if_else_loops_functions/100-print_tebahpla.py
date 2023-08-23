#!/usr/bin/python3
for x in range(26):
    if x % 2 == 0:
        print('{}'.format(122 - x), end='')
    else:
        print('{}'.format(90 - x), end='')

