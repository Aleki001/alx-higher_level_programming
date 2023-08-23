#!/usr/bin/python3
for no1 in range(0, 8):
    for no2 in range(no1 + 1, 10):
        print("{}{}".format(no1, no2), end=', ')
print("{}{}".format(no1 + 1, no2))
