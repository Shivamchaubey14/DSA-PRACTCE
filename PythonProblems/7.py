# 7. Write a Python program to remove duplicates from a list.

givenList = [10, 20, 30, 20, 10, 50, 60, 40, 80, 50, 40]

duplicateItems = set()

uniqueItems = []

for number in givenList:
    if number not in duplicateItems:
        uniqueItems.append(number)
        duplicateItems.add(number)


print(duplicateItems)