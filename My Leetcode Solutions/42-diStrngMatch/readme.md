# Problem
- we are given a string that is made up of combination of 'I' 'D'
- here I means incresing and D decreasing.
- what we have to do is return a n+1 array that prints low if there is I and n || size of array if D
- it should go like low++ and high--

# Approch
- create a new array
- every time push back based on condition
- for the last element we have to run loop n+1 times. 
- my hunch is that on every n+1 iteration it runs else condition

# Complexity
- The time complexity  O(n).

- The space complexity O(n)