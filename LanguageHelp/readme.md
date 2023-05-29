# Hash Map

```cpp
map<string, pair<int, int>> myMap;

for (auto it = myMap.begin(); it != myMap.end(); ++it)
		{

			// std::cout << it->second.first << " " << it->second.second << std::endl;
			v.push_back(it->second.first); // the second item here is a pair. so we are accessing first of that second
			v.push_back(it->second.second);
		}


  if (myMap.find(key) == myMap.end())	{
				myMap.insert({key, {i, j}});
			}
```
![Map](./assets/map.png)

# Vectors

```cpp
  vector<int> ans(2 * n);
  vector<int> result(height.size() * height.size());
  vector<vector<int>> nums(n, vector<int>(n));
  vector<vector<int>> ans(2, vector<int>());
  vector<long long> nums(n);

  int row = image.size();
  int col = image[0].size();
  vector<vector<int>> ans(row, vector<int>(col));
  ```
![Vector](./assets/vector.png)
# Sets

```cpp
   set<int> mySet1;
     mySet1.insert(nums1[i]);
---
    set<char> uniqueChars;

        // Insert each character of the string into the set
        for (char c : sentence)
        {
            uniqueChars.insert(c);
        }

        for(auto n:mySet1){
            if(!mySet2.count(n)) ans[0].push_back(n); //Count(n) checks if element n is present in the set
        }
```
![Set](./assets/set.png)


# Stack
![Stack](./assets/stack.png)


# Queue
![Queue](./assets/queue.png)

# String
![String](./assets/string.png)

# important functions
```cpp
toupper(s[i])
s[i] = tolower(s[i]);
sort(nums.begin(), nums.end());
to_string(i);
```


# Iteration shortcut 
  ```cpp  
 for (auto n : nums){
    }
    // works for sets too
```