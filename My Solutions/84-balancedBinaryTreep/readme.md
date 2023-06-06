# Problem
- we have to find out if the given tree is balanced or not. a tree is balanced when the height of left subtree - height of right subtree <= 1
  and the left and the right subtree themselves be balanced too.

# Approch
- first for the base case if the root does not exist then the tree is balanced
- then chck if left is balanced or not
- then check if right is balance or not
- then find the height of left and right and subtract them to see if the maximum difference between is <= 1

<!-- optimized solution -->
- here we are calculating both the height and the balanced condition at the same time. base case handles both cases. 
- then we make sure to call the function on every left and right subtree.
- after that we do the working required for the balanced tree. life find the leftBalanced, rightBalanced and thre diff. 
- after that we update both the height and the balanced in the newly created ans pair.
- for balanced the same three conditions are checked and ans.first is assigned and for the height ans.second is assigned
- at the end we return ans pair.

# Complexity

- Time: O(n^2) b/c of height

- Space: O(h)

<!-- optimized solution -->

- Time: O(n)

- Space: O(h)
