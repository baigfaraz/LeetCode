def minimumSizeSubarraySum(target, nums):
    left = 0
    minlength = float('inf')
    sum = 0

    if len(nums) == 0:
        return minlength

    for right in range(len(nums)):
        sum = sum + nums[right]
        while sum >= target:
            minlength = min(minlength , right-left +1)
            sum = sum - nums[left]
            left = left + 1
    
    if minlength == float('inf'):
        return 0
    else:
        return minlength
    

minimumSizeSubarraySum(7, [2,3,1,2,4,3])    