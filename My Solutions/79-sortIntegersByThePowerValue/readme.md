# Problem
- we are given an array of nos and we are also given the logic to find the count relevant to each no. so we have to sort the numbers according to 
 count and in case if two nos have the same count then in that case sort them in ascending order. 

# Approch
- we have made a vector that contains two pairs.
- then we find the count related to that number. and store in the ans vec along with the number.
- once we have the ans vector done. we sort it using the lambda expression. 
- lambda helps us to define our custom sort logic
- the logic is that if the count of the numebrs is equal then sort in ascending order by the value of the number
- otherwise sort them accourding to there count. 
- when we have the sorted ans vec we return k - 1 b/c of 0-indexing.

# Complexity

- Time:  O((hi - lo + 1) log (hi - lo + 1)).

- Space: O(hi - lo + 1)