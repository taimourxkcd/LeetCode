# Problem
- array is sorted. duplicate can occur at most 2 times ( <= ). also need to modify the array in place. 
 at the end return the max index

# Approch
- we loop, and in every iteration, we compare if element != nums[i]. then we modify the array.
- if condition is false, then we do not modify the array.
- the next time we encounter another element that is !=
- then we again modify the array.
- also keep in mind that i is not increasing in every iteration.

# Complexity

- Time: O(n) 

- Space: O(1) 