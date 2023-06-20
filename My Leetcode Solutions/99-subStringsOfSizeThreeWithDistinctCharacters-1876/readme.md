# Problem
- we have a string and we have to find the number of good sub strings.
- a good substring whose length is 3 and all distinct characters

# Approch
- we use sliding window of 3 and a set
- set to store the distich characters int the substring
- on every iteration we push all of the characters in the set
- the way it works is b/c set only stores distinct characters. 
- therefore if all were different, the size = 3 and therefore we increment the count.
- there is an edge case though, if the string size == 1, we try to access the memory where there is nothing, so we handle that separately

# Complexity

- Time: O(n^2)

- Space: O(1)