from collections import Counter

def min_pushes(s):
    print(len(s))
    print(len(set(s)))
    if len(set(s)) < 9:
        return len(s)
    length = len(set(s))
    no_of_pushes = 0
    count_length = 0
    pushes = 0
    while length > 0:
        count_length = count_length + 1
        if count_length <= 8:
            pushes = 1
        elif count_length <= 16:
            pushes = 2
        elif count_length <= 24:
            pushes = 3
        else:
            pushes = 4
        freq = Counter(s)
        max_char, max_count = freq.most_common(1)[0]
        print(s)
        print(max_char , ' is ' , max_count , ' times')
        no_of_pushes = no_of_pushes + (max_count * pushes)
        print('so no of pushes is ' , no_of_pushes)        
        s = s.replace(max_char , "")
        length = length - 1
    
    return no_of_pushes      

s = "aremgjnptohswfdkyuzvicqxb"
# s = "xyzxyzxyzxyz"
print(min_pushes(s))