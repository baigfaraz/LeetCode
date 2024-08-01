def reverseWordsInAString(s):
    word = ""
    stack = []
    stack.append(-1)
    string = ""

    for i in range(len(s)):
        if s[i] != " ":
            word = word + s[i]
        else:
            if len(word) > 0:
                stack.append(word)
                stack.append(" ")
                word = ""
    if len(word) > 0:
        stack.append(word)
    else:
        stack.pop()

    while stack[-1] != -1:
        string = string + stack[-1]
        stack.pop()


    print(string)
    return string

s = "a good   example"
reverseWordsInAString(s)