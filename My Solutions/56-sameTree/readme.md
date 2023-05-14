# Problem
- find if two BST are equal

# Approch
- our base case is that if both trees are null, return true
- secondly we move toward left subtree in p and in subtree q. if it is not null then it checks if both nodes exist
  and have the same value.
- we repeat this for the left child of p and left child of q. 
- if anytime the values in p and q are different, we return false

# Complexity

- Time:  O(n): The time complexity of the isSameTree() function is O(n), where n is the total number of nodes in the binary tree. This is because the function visits every node in the tree once.

- Space: O(n) The space complexity of the function is also O(n) in the worst case. This is because the function uses recursion, and in the worst case scenario where the binary tree is completely unbalanced, the function call stack can grow as large as the number of nodes in the tree.

- However, in the best case scenario where the binary tree is perfectly balanced, the height of the tree would be log(n), and the space complexity would be O(log(n)).
