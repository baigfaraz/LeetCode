def range_sum_of_sorted_subarray(nums , n , left , right):
    new_array = []
    
    for start in range(n):
        sum = 0
        for end in range(start , n):
            sum = sum + nums[end]
            new_array.append(sum)

    new_array.sort()
    sum = 0
    for i in range(left-1 , right):
        sum = sum + new_array[i]
    return sum % 1000000007

nums = [1,2,3,4]
n = 4
left = 1
right = 5
print(range_sum_of_sorted_subarray(nums , n , left , right))