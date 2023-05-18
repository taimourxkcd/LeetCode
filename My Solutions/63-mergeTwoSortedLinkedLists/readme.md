# Problem
- merge two sorted lists. result should also be a sorted linkedlist

# Approch
- we create a two new node called dummy and record. record will keep track of the head of dummy
  while the dummy will iterate through the list.
- and we iterate through both lists unltil they become NULL.
- at the end we know that the next poniter for one of the list is at NULL while for other it is the last.
- that is why we check the last condition, that for the node that exists, assign the next pointer of dummy to it.



# Complexity

- Time: O(n + m), n and m are the length of the linked lists 



- Space: O(1) 