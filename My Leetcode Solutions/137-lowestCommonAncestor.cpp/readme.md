# Problem Statement
- we are given nodes p and q and tree. we have to find Lowest common ancestor.

# Approch
- LCA is that has both p and q as its child. a node itself can be a LCA as well. 
- use the property that left nodes are > root and right < root.
- if root is p or q return it.
- if both left right exist after traversal then root is LCA
- if either one of them is found then that is the LCA.


# Complexity:
- Time: O(n)
- Space: (n)