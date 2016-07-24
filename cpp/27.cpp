#include <vector>
#include <iostream>

using namespace std;

class Solution 
{
public:

	//27
	int removeElement(vector<int>& nums, int val) 
	{
		int j = 0;
		for (int i = 0, len = nums.size(); i < len; i++)
		{
			if (nums[i] != val)
			{
				nums[j++] = nums[i];
			}
		}
		return j;
	}
};


void main(void) 
{
	Solution instance;
	vector<int> nums;
	nums.push_back(1);
	nums.push_back(31);
	nums.push_back(12);
	nums.push_back(14);
	nums.push_back(5);
	nums.push_back(1);
	nums.push_back(1);
	nums.push_back(1);
	nums.push_back(1);
	nums.push_back(5);
	nums.push_back(5);
	nums.push_back(5);
	nums.push_back(5);
	nums.push_back(5);
	nums.push_back(5);

	cout << instance.removeElement(nums, 5) << endl;
	for (auto val : nums)
	{
		cout << val << " ";
	}
	getchar();

}
