# Problem Statement
- we have to remove stars and the leftmost non star character in the string;

# Approch
- we use stack
- traverse and if ch == *, then append else pop if stack is empty;
- then we pop all elements and make a string but the string is in reverse order, so we reverse it and return;

# Complexity:
- Time: O(n) , n is the size of the string 
- Space: (n)