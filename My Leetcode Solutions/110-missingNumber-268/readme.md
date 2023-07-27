# Problem
- so basically we have to find the missing number in an array of distince numbers

# Approch
- sort the array. 
- start looping from 0 to n. each iteration check if nums[i] == i. if not then it is not present and return it.

# Complexity

- Time: O(nlogn)
- Space: O(1)