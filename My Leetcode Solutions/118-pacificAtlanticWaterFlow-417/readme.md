# Problem Statememnt
- we have a 2d matrix that contains heights. on the top and top-left there is pacific ocean and on the bottom and bottom-right there is atlantic ocean. we have to find 
  and give all the coordinates from which the water can flow both from pacific to atlantic and vice versa. 

# Approch
- we create two new vector exactly of the same size as heights. pacific tells us the coordinates from which water can flow in both directions. same for atlantic.
- at the end we would check the coordinates that are common in both atlactic and pacific and that would be our answer.
- first we make two queues
    - pq gets all the coordinates of top and top-left
    - aq gets all the coordinates of bottom and right
- then we apply bfs in all the enteries of the queue.
- here this might seem counter intuative heights[x][y] >= heights[i][j] but the thing is we are checking the coordinates that we can reach starting from the inital top, left, bottom, right


# Complexity
- Time: O(m*n)
- Space: O(m*n)
