# Problem
we have to shuffle the array like this 
Input: nums = [2,5,1,3,4,7], n = 3
Output: [2,3,5,4,1,7] 
Explanation: Since x1=2, x2=5, x3=1, y1=3, y2=4, y3=7 then the answer is [2,3,5,4,1,7].

# Approch
- create two pointers. one from start and other from middle.
- make two variables i and j and increment them by 2
- variable k is responsible to run the loop for half the size of the array b/c we are shuffling two elements at a time

# Complexity
- The time complexity O(n)

- The space complexity O(n)