#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{

	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		int target;
		cin >> target;

		std::map<std::string, std::pair<int, int>> myMap;
		std::vector<int> v;

		int count = 0;
		for (int i = 0; i < n; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (a[i] + a[j] == target)
				{
					count++;
					std::string key = "pair " + std::to_string(i) + ":";
					if (myMap.find(key) == myMap.end())
					{
						myMap.insert({key, {i, j}});
					}
					// cout<< i << "," << j <<endl;
				}
			}
		}

		for (auto it = myMap.begin(); it != myMap.end(); ++it)
		{

			// std::cout << it->second.first << " " << it->second.second << std::endl;
			v.push_back(it->second.first);
			v.push_back(it->second.second);
		}

		for (const auto &elem : v)
		{
			std::cout << elem << " ";
		}
		cout << endl;
	}
}