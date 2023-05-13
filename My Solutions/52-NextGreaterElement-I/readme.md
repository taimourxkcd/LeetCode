# Problem
- two arrays nums1 and nums2 are given
- nums2 is a subset of nums1
- so for every element of nums1, check where that element occurs in nums2
- then find that is there any element greater then it (look for elements only after it)
  eg [4 1 2] [1 3 4 2], in this case for 1 in nums1, we find that 1 is at 0 index in nums 2. and the next greater
  after it is 3.
- if there is no greater element return -1
- finally return the array of ans  

# Approch
- loop through the vec obviosuly and move for every element in nums1 until it occurs in nums2.
- once found, then loop for all the rest of element of nums2
- if found, push into ans and break, else if it did not found flag will be false. in that case we would push -1.
- and if element is foumd we turn the flag back to false at the end.


# Complexity

- Time:  O(n1 * n2)

- Space: O(1)