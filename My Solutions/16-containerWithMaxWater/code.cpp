#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{

	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		vector<int> nums(n);

		vector<int> area;

		for (int i = 0; i < n; i++)
		{
			cin >> nums[i];
		}

		vector<int> sorted(nums.size());

		copy(nums.begin(), nums.end(), sorted.begin());

		// sorting the array
		for (int i = 1; i < n; i++)
		{
			int j = i - 1;
			int current = sorted[i];
			while (j >= 0 && sorted[j] > current)
			{
				swap(sorted[j + 1], sorted[j]);
				j--;
			}
		}

		// removing the duplicates
		auto it = unique(sorted.begin(), sorted.end());
		sorted.erase(it, sorted.end());

		// max element from left
		int max_left = nums[0];
		int max_index = 0;

		for (int i = 1; i < nums.size(); i++)
		{
			if (max_left < nums[i])
			{
				max_left = nums[i];
				max_index = i;
			}
		}

		// max element from left
		int sec_high = nums[0];
		int sec_high_index = 0;

		int no = sorted[sorted.size() - 2];
		int i = 0;
		while (nums[i] != no && i < nums.size())
		{
			sec_high_index++;
			i++;
		}

		// cout<<sorted[sorted.size()-2];

		int distance = sec_high_index - max_index;

		cout << no * distance << endl;
	}
}