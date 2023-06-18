# Problem
- reverse a linked list

# Approch

- we need 3 new pointers
- curr will be head while prev and next would be null initially
- loop until curr is not NULL
- every time we do 3 things
    - we set next pointer 
    - then move prev forward
    - then curr becomes prev    


# Complexity

- Time:  O(n)

- Space: O(1)

# Approch2
- here we use recursion. the samething that we did above. 
- pass the head, curr and prev pointers in the sovle func
- in base case we handle the very end node separately.
- now we only need to sovle for one node. 
- so we store the next pointer of current.
- and next time in the function pass next to current, and curr to prev.
- and we say that after you done doing reversing. point the curr->next to prev. 
- we do this till we reach the end of the list
# Complexity

- Time:  O(n)

- Space: O(n)