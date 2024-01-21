# 10. Write a Python program to find the list of words that are longer than n from a given list of words.

def findingLongerWords(length, str):
    word_len = []

    text = str.split(" ")

    for word in text:
        if len(word) > length:
            word_len.append(word)
    return word_len

print(findingLongerWords(3, "The quick brown fox jumps over the lazy dog"))
