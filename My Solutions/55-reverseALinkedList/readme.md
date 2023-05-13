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