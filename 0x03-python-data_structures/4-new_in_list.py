#!/usr/bin/python3
def replace_in_list(my_list, idx, element):
    if my_list:
        my_new_list = my_list.copy()
        if idx < 0 or idx >= len(my_list):
            return my_list
        my_new_list[idx] = element
        return my_new_list
