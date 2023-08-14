#!/usr/bin/python3
def divisible_by_2(my_list=[]):
    new_list = []
    for x in range(len(my_list)):
        if my_list[x] % 2 == 0:
            new_list = 1
        else:
            new_list = 0
    return new_list
