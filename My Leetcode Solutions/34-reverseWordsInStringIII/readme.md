# Problem
- we are given a sentence and have to reverse each word inside it

# Approch
- loop through the whole array while incrementing count(counts the number of letters in the word)
- when encounter a ' ', do a while loop which reverses the word backward and append it to a new string ans.
- append an empty space to ans
- since the last word will that satisfy the condition: ' ', we handle it separate at the end
-
# Complexity
- The time complexity  O(n).

- The space complexity O(n)