# Problem
- we are given a string and we have to split in such a way that the no distinct elements in the both splited stirng are the same.
 eg s = aacaba, aac and aba is a good split 

# Approch
- we have used two hash maps
- first we get the count of each element like how many times it occurs in the string
- second we make another hasahmap and in this we traverse the stirng and adding the no of occurences in map2.
- plus we also decrement the same character from map1 that we incremented in map2.
- in this way if decrementing in map1 makes some element occurance == 0, then it means it occurs in the same time in map2. therefore we remvoe it 
  from the map1.
- at the end of every iteration, we check if the size of map1 == map2 then we increment the count
- in this way count will have found the total no of ways in which the string is split such that they have equal no of distinct elements

# Complexity

- Time: O(n) 

- Space: O(1) b/c total distinct alphabets in english are 26.