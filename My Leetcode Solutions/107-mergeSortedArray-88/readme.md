# Problem
- we are given two arrays nums1 and nums2 with their respective size i.e m and n. looking at the question
  we see a bunch of zeros at the end of nums1(m+n size). they are their so that you are able to store the result after  merging.

# Approch
- we go from the end to start.
- we have 3 variables i, j, and k. k keeps record of the elements to be placed in the correct place, i and j
  keep track of which elements have been sorted
- we have 2 cases
  - if element in nums1 > nums2, then store the nums1 element at the end and decrease i and k
  - similarly if nums1 < nums2, then store nums2 at k index and decrease j and k
- we go through the loop as long as both the arrays are valid. as soon as i or j becomes -1, we get out of
  loop b/c one of them has become out of bound. 
- if i became out of bound then we place the rest of nums2 elements in nums1 at k index
- if j became out of bound then we place the rest of nums1 elements in nums1 at k index


# Complexity

- Time: O(m+n)

- Space: O(1)