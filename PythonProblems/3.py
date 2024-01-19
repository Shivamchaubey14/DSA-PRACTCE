'''
Write a Python program to get the largest number from the list
'''

def maxNumberInList(list):
    max = list[0]

    for number in list:
        if number > max:
            max = number
    return max

print(maxNumberInList([1,2,-8,0]))

