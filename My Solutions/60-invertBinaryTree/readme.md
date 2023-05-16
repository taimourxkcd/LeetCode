# Problem
- invert a binary tree

# Approch
- first we do a sanity check, if there is no root return 0.
- otherwise we swap the right an left child of the root.
- then we move to left, swap its right and left
- we go until we dont react the end of left subtree
- we repeat this for the right subtree as well
- once we are done we return the root

# Complexity

- Time: O(n), where n is the number of nodes in the binary tree. This is because the solution visits each node exactly once.



- Space: O(h) where h is the height of the binary tree. This is because the maximum number of recursive calls that can be on the call stack at any given time is equal to the height of the binary tree. In the worst case scenario, when the binary tree is skewed, the height of the tree can be equal to the number of nodes in the tree, making the space complexity O(n).