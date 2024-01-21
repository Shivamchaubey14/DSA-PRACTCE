# 11. Write a Python function that takes two lists and returns True if they have at least one common member.

def common_data(list1, list2):
    result = False

    for list1number in list1:
        for list2number in list2:
            if list1number == list2number:
                result = True
                return result

print(common_data([1, 2, 3, 4, 5], [5, 6, 7, 8, 9]))

print(common_data([1, 2, 3, 4, 5], [6, 7, 8, 9])) 
