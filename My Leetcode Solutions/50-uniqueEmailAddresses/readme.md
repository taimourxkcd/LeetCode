# Problem
- find unique emails from given emails
- rules. when you find the (.) . remove it and when find '+'. ignore it.

# Approch
- loop through the array.
- store the part before @ in string local and after in variable domain
- perform ops according to rules
- at end combine both with @ in middle
- store in set becuase it only stores the uique elements
- return set size   


# Complexity
- The time complexity of this solution is O(n*m), where n is the number of email addresses and m is the maximum length of an email address. This is because we are iterating through each character of each email address, which takes O(m) time.

- The space complexity of this solution is O(nm), because we are creating a set to store unique email addresses, which can have up to nm elements if all emails are unique. Additionally, we are creating several string variables to manipulate the email addresses, which can also have a total length of up to n*m.