# Problem
-  we are given a tree and we have to return true if it is symmetric otherwise false. symmetric means that it is the mirror image of itself.

# Approch
- first thing is sanity check like if root is NULL then it is a mirror image and return true.
- if root exist they we have to pass it left and right tree into the helper function
- here we check if both of them are null then reutrn true. talking about left and right child. Remember there is an && condition. 
- then we know that ok the right and left child exits. now we check if the values inside these are equal or not. if not return false. we also 
  check if one is root1 is null and root2 exits then also return null. and if root2 is null and root1 exits then also return null.
- now important thing, we are passing right child of root1 and left child of root2 for comparison. (Remember mirror images ). if 
  they are equal then we return true. remember the base case. it would return true if both are null. that means that the ones 
  that are equal did that pass the condition ```cpp  if (!root1 || !root2 || root1->val != root2->val) return false; ```

# Complexity

- Time: O(n) 

- Space: O(h) 