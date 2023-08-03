# Problem
- we have to find the smallest number in a BST, BUT it should be the kth smallest number. k is also given.

# Approch
- we utilize the property of the BST that all elements less the root are in the left and greater then
  it are in the right.
- we know that inorder traversal visits the nodes like this: left, root, right
- this way it moves down to the very left end of the tree. 
- after that it decrements k and assign the value in the node to the root.and if k == 0 then it returns 
  the result. b/c in a BST left most value in the tree is the smallest.
- once done it calls helper method again. and all this stuff repeats.


# Complexity

- Time: O(H + k) height and k smallest element
- Space: O(H)