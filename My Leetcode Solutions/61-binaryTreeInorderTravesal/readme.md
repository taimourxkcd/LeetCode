# Problem
- return a vector with values in inorder traversal

# Approch
- it is important that you make the helper function when working on leetcode
- otherwise its the same traversal but we have to return a vector. that is the difference

# Complexity

- Time: O(n), where n is the number of nodes in the binary tree. This is because the solution visits each node exactly once.



- Space: O(h) The space complexity of the algorithm is O(h), where h is the height of the binary tree. In the worst case, where the binary tree is skewed and resembles a linked list, the height of the tree is equal to the number of nodes, resulting in O(n) space complexity. However, in a balanced binary tree, the height is logarithmic in the number of nodes, resulting in O(log n) space complexity.