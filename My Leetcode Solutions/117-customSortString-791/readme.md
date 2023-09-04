# Problem Statement
- we are given two strings. order tells us the order in which the resultant string should appear. and s is the string itself.

# Approch
- first we make a hashmap of s.
- then we traverse the order. if the ch is present in the hashmap then we add it to the resultant string.
- but what if we have another duplicate element. that is why we keep adding the ch in resultant string as long as it is present in the map.
- once we are done traversing the order. then that means that we have successfully handled the case where the resultant elements should appear in a sequence. 
- now for the remaining elements that are left in the map. we add them in the resultant string. the order does not matter here

# Complexity
- Time: O(m+n)
- Space: O(n):n
