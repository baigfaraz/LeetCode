def kth_distinct_in_array(arr , k):
    if k == 0:
        return ""
    for i in range(len(arr)):
        count = arr.count(arr[i])
        if count == 1:
            k = k - 1
            if k == 0:
                return arr[i]
    return ""

arr = ["aaa","aa","aa"]
k = 3
print(kth_distinct_in_array(arr , k))
