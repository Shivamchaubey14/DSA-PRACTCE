# Find the smallest items in a list 

def smallestNumberInList(list):
    min = list[0]

    for number in list:
        if number < min:
            min = number
    return min

print(smallestNumberInList([1,2,-8,0])