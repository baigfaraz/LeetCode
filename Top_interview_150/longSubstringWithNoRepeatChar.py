def has_no_duplicate(substring):
    if len(substring) == len(set(substring)):
        return True
    else:
        return False

def longest_substring_with_no_repeating_characters(s):
    maxlength = 0
    length_of_string = len(s)
    

    for start in range(length_of_string):
        for end in range(start + 1 , length_of_string + 1):
            if has_no_duplicate(s[start:end]):
                maxlength = max(maxlength , len(s[start:end]))
    
    print(maxlength)
    return maxlength


def longest_substring_with_no_repeating_characters1(s):
    maxlength = 0
    start = 0
    char_set = set()

    for end in range(len(s)):
        while s[end] in char_set:
            char_set.remove(s[start])
            start = start + 1

        char_set.add(s[end])
        maxlength = max(maxlength , end - start + 1)
    
    print(maxlength)
    return maxlength

s = "pwwkew"
longest_substring_with_no_repeating_characters1(s)