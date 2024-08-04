def add_element_at_right(arr):
    if arr[0] == 0:
        arr.append(arr[0])
    else:
        for i in range(len(arr)):
            if arr[i] == 1:
                arr.append(arr[i])
            else:
                break
    return arr

def add_element_at_left(arr):
    arr
    i = arr[len(arr)-1]
    print(i)
    # if arr[len(arr)-1] == 1:
    #     i = len(arr)-1
    #     while i >= 0:
    #         if arr[i] == 1:
    #             arr.insert(0 , arr[i])
    #         else:
    #             break
    # return arr

def minimumSwapTogetherAllOnes(nums):
    min_no_ofswap = float('inf')
    no_of_ones = nums.count(1)
    nums1 = add_element_at_right(nums)
    # print(nums1)
    for i in range(len(nums1) - no_of_ones + 1):
        no_of_swaps = nums1[i:i + no_of_ones].count(0)
        min_no_ofswap = min(min_no_ofswap , no_of_swaps)

    # print(min_no_ofswap)
    if min_no_ofswap != 0:
        nums2 = add_element_at_left(nums)
        print(nums2)
    #     for i in range(len(nums2- no_of_ones +1)):
    #         no_of_swaps = nums2[i:i+ no_of_ones].count(0)
    #         min_no_ofswap = min(min_no_ofswap , no_of_swaps)

    # return min_no_ofswap
        

nums=[0,1,0,0,1,0,0,0,1]
print(minimumSwapTogetherAllOnes(nums))
