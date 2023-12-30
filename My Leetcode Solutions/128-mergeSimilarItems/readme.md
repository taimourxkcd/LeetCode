# Problem Statement
- we have two 2d arrays that contain the intervals. like value and its weight. we have to combine the weights for the same value.

# Approch
- First we create a hash map for the first vector
- then iterate the second vector. if we find the key we add its value to the value of that key
- otherwise just add that in the hashmap.
- at the end push back results into and array and sort it based on the first element value.

# Complexity:
- Time: O(n + m + k log k) 
- Space: O(k) distinct keys in map