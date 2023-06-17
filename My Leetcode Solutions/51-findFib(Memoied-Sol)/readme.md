# Problem
- find the given number in fibonchi series. eg input  = 3, mean find 3rd fib no

# Approch
- this is an optimized sol so we don't have to do the same calculation again and again
- we create a new vec and initizalize it to -1
- then every time we find like what is the 2nd fibonnachi no, we override -1 in the array with ans.
- we passed by reference otherwise if it was by value it would have created a new copy and time limit exceeded error.
- we have just added one more check. it checks that if the no in that index is not -1 then return whatever is there.
  in this way we don't need to calculate again.
- plus we are storing whatever our sol fun returns in memo vector.


# Complexity

- Time O(n) b/c n calls are made to sol() function

- Space O(n) b/c we are creating a new vector with n+1 space

NORMAL SOLUTION

- Time O(2^n) b/c no of calls to the function each time doubles. every call to sol() creates two new recursive calls

- Space O(n) because max space the stack would take is n

