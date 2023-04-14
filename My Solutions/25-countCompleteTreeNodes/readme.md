# Problem Statement
we have to count the total number of Nodes in the tree

# Approch
- we do a pre order traversal
- and for every node we increment sum by one 

# Complexity
- The time complexity of the countNodes function is O(N), where N is the number of nodes in the
 binary tree. This is because the function visits every node exactly once during the pre-order traversal.

- The space complexity of the countNodes function is O(H), where H is the height of the binary tree.
 This is because the function uses recursion to traverse the binary tree, and the maximum depth of the recursive
call stack is equal to the height of the tree. In the worst case, when the binary tree is completely unbalanced and has
 a height of N, the space complexity will be O(N).