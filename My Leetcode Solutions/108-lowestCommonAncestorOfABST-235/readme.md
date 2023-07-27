# Problem
- so in the given problem we have to find the lowest common ancestor in a BST. as the name says out of all
its ancestor check if it is the lowest.  
- A node can be a descendant of itself according to the LCA definition.()

# Approch
- first if root is NULL then return NULL.
- in the base case we check if any node has the value of p or q then return that node. 
- in that way move all the way to the left and then to the right
- and store the returned value from the base case into left_lca or right_lca
- at the end if both left_lca and right_lca exist then return the node. 
- otherwise if right is NULL, return left
- if left is NULL, then return right (these last 2 points i am confused about too)

# Complexity
 
 - Time: O(n)
 - Space: O(H)
