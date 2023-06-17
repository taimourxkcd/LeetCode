# Problem
- return a 2d vector such that the elements of num1 that are present in num2 are not in resultant vector and vice versa
# Approch
- we make two sets and populate the vector elements inside that set, so that we have unique elements
- then we push back elements of set1 that are not present in set2 and vice versa 

# Complexity
Time complexity: O(n+m), where n and m are the sizes of nums1 and nums2 respectively. This is because we need to iterate over both input vectors to insert their elements into the corresponding sets, which takes O(n+m) time. Then, we iterate over the elements in the sets to find the difference, which also takes O(n+m) time.

Space complexity: O(n+m), as we are using two sets to store the elements from the input vectors, which could contain up to n and m elements respectively. Additionally, we are returning a vector of size 2, which contains the elements that are in nums1 but not in nums2 and vice versa. However, this vector's size is at most n+m, which is proportional to the size of the input vectors. Therefore, the overall space complexity is O(n+m).