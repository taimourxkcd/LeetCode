# Problem Statement
- given a string find if parenthesis is valid. 

# Approch
- traverse the string. push the character if it is [ ( {
- when you encounter a closing bracket, check the character on top of the stack. 
- if the current character != element of top of stack that means its invalid.    

# Complexity:
- Time: O(n) , n is the size of the string 
- Space: (n)