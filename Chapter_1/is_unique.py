'''
Is Unique: Implement an algorithm to determine if a string has all unique characters. What if 
you cannot use additional data structures?
'''

def is_unique_1(word):

    #This implementation uses a set data structure 

    return len(word) == len(set(word))


if __name__ == "__main__":

    s1 = "Hello"
    s2 = "A sentence"
    s3 = "coming"
    s4 = "Bears, Beets, Battlestar galactica"

    print("Is '", s1, "' Unique? ", is_unique_1(s1))
    print("Is '", s2, "' Unique? ", is_unique_1(s2))
    print("Is '", s3, "' Unique? ", is_unique_1(s3))
    print("Is '", s4, "' Unique? ", is_unique_1(s4))
