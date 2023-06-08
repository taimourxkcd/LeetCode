# Problem
- we have to find the files that have the duplicate content. we are given a vector of string. the strings inside are actually the paths of the file
  in a computer system. we have to find the files that have the duplicate content inside them and return a new array such that it contains the 
  name in this order. directory_path/filename.txt;

# Approch
- iterate throught the paths stirng and each time pick a single string.
- create a new string named dirName and store the name of the directory inside it. the way we do it is to go through the string until you found ' '.
  once found we stop. that is our directory name.
- after that we have file names.
- then we traverse until we found ".". i.e is the name of the file
- we increment +5 after that b/c .txt = 4 and + 1 b/c we want to read content inside the file
- then we traverse to read the content until we found an empty space. at the end we pop_back b/c i.e "(". it is not part of file content.
- since we only have to return the duplicate filenames, we use a hashmap. so what we are doing is that. we use filecontent as the key and against it
  we store all the paths where it lies.
- once our hashmap is complete we check in hashmap the keys for which there are multiple paths. and we push that into a vector of vectrs called res.
- now we have a vector of vector that contains all paths for the files that have the same conent inside them 


# Complexity

- Time: O(n*m)

- Space: O(n)