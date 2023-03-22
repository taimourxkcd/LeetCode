# Approch

    We need to find our first decoded character before finding other characters. The decoded character might be formed by a
    one-digit number or a two-digit number that is less than or equal to 26. After finding the first possible decoded character,
     we should keep doing the same thing on the rest of the string based on the previous choice until there’s no number left.

## time complexity 
    O(n)
## space complexity 
    O(1)