# Problem
- we have to check if the sum of every node in the tree is equal to the sum of if left child and sum of right child

# Approch
- we have 2 base cases. first if the tree is NULL then return true and 0.
- second if we are on a leaf node. in that case we have to return true with the data that is inside the leaf node.
- next we run the recursion for all the left and right subtrees in the tree.
- we store the ans as true or false in 2 bool vairables, isLeftSumTree and isRightSumTree
- similarly we store the value each tree returns in leftSum and rightSum variables.
- then we check if the values returned above i.e sum of right +  sum of left == root. if yes then condition is true.
- after that we check if left tree has returned true and right has returned true and also there values are equal we return true above. and also
  the sum of root + left + right. otherwise return false.
- this way everytime we return a pair. and print the value if it is treue or not 

# Complexity

- Time: O(n)

- Space: O(h)