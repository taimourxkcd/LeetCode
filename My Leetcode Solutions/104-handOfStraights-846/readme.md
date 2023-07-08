# Problem
- we are given an array of cards and we have to group them according the given groupSize. and the cards should be consective

# Approch
- first we handle the case that if the array size is not divisible by groupSize then that means we can not group them equally and return 
  false.
- then we use  a hash map. its an ordered hash map b/c we want to keep the cards in the order. 
- then we run into a loop that runs as long as there is values in the hashmap.
- now we pick the value that is on the top of the hashmap. and run a for loop equal to the groupSize 
  ,then we see if the value is present then we reduce its frequency in the hash map. 
- if the frequency becomes 0, we remove it and move to the next element. 
- at any point if we are not able to find the value in the map, we return false. this else code is not very clear to me.

# Complexity

- Time: O(nlogn/groupSize)   n is the number of cards in the hand and groupSize is the given group size.

- Space: O(n) 