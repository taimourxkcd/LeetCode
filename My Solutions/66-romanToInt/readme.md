# Problem
- convert roman into integer

# Approch
- approch is simple, whole logic is given in the question
- if previous element letter is smaller then subtract from the current element value else add current element value
- make a hash map with roman to int mapping
- loop throguh the string elements one by one. everytime check current and previous element. do add/sub on basis of
  above logic
- we run loop i - 1 times b/c otherwise we would get an out of bound exception error. so we handle that case      
  separately
- we always add the last digit value becuase there is no value after it to compare it against  

# Complexity

- Time: O(1) b/c max string size if <= 15

- Space: O(1) 