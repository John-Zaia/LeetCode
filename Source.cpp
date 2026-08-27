#include <vector>
#include <iostream>
#include <algorithm>
#include <iterator>
#include <cctype>
#include <string>
#include <utility>
#include <print>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>

int main()
{
	std::vector<int> nums = {5, 5};
	std::vector<int> indexes;
	int target = 10;
	int exists;

	for (int i = 0; i < nums.size() - 1; i++)
	{
		exists = target - nums[i];

        auto it = std::find(nums.begin() + i + 1, nums.end(), exists);
		if (it != nums.end()) {
			int index = std::distance(nums.begin(), it);
			indexes.emplace_back(i);
			indexes.emplace_back(index);
			break;
		}
	}

    for (int idx : indexes) {
        std::cout << idx << " ";
    }


}