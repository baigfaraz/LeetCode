def make_two_array_equal_by_reversing_subarrays(target , arr):
    for i in range(len(target)):
        index = -1
        for j in range(i , len(arr)):
            if arr[j] == target[i]:
                index = j
                break
        print(index)
        if index == -1:
            return False
        arr[i:index+1] = arr[i:index+1][::-1]
    return True

print(make_two_array_equal_by_reversing_subarrays(target=[1 , 2 , 3 , 4] , arr=[2 , 4,1,3]))