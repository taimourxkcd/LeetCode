# Problem
- we have to find out if two rectangeles overlap or not. and in the array x1 and y1 are the bottom left coordinates and x2 and y2 are the top right 
  coordinates.

# Approch
- first we make sure that rectanges are not horizontally separated. in condition if rec1[0] < rec2[2]
- then we make sure that rectanges are not vertically separated. in condition if rec1[1] < rec2[3]
- then for the 2nd rectange. we make sure that x coordinate of right rectange is > left. this makes sure that rectangles are not 
  horizontally separated in the opposite direction rec2[0] < rec1[2]
- then for the 2nd rectange. we make sure that y coordinate of right rectange is > left. this makes sure that rectangles are not 
  verticallly separated in the opposite direction rec2[1] < rec1[3]
- https://www.youtube.com/watch?v=UUjeqglXaSQ

# Complexity

- Time: O(1) 

- Space: O(1) 