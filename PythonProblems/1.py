'''Write a Python program to sum all the items in a list'''

def sum_list(items):
    sum_number = 0
    for number in items:
        sum_number += number
    return sum_number
print(sum_list([1,2,-8]))