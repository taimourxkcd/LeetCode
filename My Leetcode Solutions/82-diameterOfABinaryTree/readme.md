# Problem
- we have to find the diameter a binary tree i.e the longest between any two end/leaf nodes in a tree

# Approch
- we find three options for us
- first we make a recursive call to the left and then to the rigth. they will give us the diameter of the left and the right respectively
- then for op3, we find the height of the left and right and add them both. this way we will get the longest path to the leaf in the left tree
  and also the longest path in the right subtree.
- but we are getting O(n^2) because at every node we are making calls to the height function too.

<!-- optimized approch -->
- here instead of calling the height funciton
- we are calculating the diameter and height at the same time 
- the first entry in the pair is diameter and the second is height
- this is the line that is calculating the height ``` ans.second = max(left.second, right.second) + 1; ```

# Complexity

- Time: O(n^2) 

- Space: O(h)

<!-- optimized approch -->

- Time: O(n) 

- Space: O(h)
