# Problem
- we are given a pointer to a node and we have to delete that node in a linked list

# Approch
- since we are given the pointer to the node, its very easy.
- we just copy the val that is inside the next node into it.
- and then just change its next pointer and assign it to the next of next bypassing the next node

# Complexity

- Time: O(1)

- Space: O(1)