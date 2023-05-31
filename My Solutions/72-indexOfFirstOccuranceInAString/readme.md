# Problem
- given two strings, we have to find if the second string is a subset of first string. if yes then return its starting index, else return -1
- the substring can occur multiple times, so you have to pick the one that is closest from the start

# Approch
- we have used the sliding window approch here.
- for that we need to declare a start variable and a len variable i.e the size of the second substirng (needle).
- every time we cut the subtring equal to the size of needle and compare to check if it is equal. if yes return start else move on
- after looping through the whole first string, if we don't find the substring then that means it does not exist and we return -1.
- dont know about the optimized approch


# Complexity

- Time: O(n) 

- Space: O(1) 