# Problem
- we have to do a simple level order traversal

# Approch
- typical approch. apply bfs, make use of queue
- initially, push the root into the queue. 
- then go in the while loop. as long as there is elements inside it. 
- now do operations on all the nodes that are inside the queue. 
- take the node and store it. pop from queue.
- store it in the curr vector. 
- at the end push curr into result vector  


# Complexity

- Time: O(nlogn)
- Space: O(1)