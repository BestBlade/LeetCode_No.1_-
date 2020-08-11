/*---------------------------------------------------------------------------------------------------------------
*给定一个整数数组 nums 和一个目标值 target，请你在该数组中找出和为目标值的那 两个 整数，并返回他们的数组下标。	|
*你可以假设每种输入只会对应一个答案。但是，数组中同一个元素不能使用两遍。										|
																												|
*示例:																											|
																												|
*给定 nums = [2, 7, 11, 15], target = 9																			|
																												|
*因为 nums[0] + nums[1] = 2 + 7 = 9																				|
*所以返回[0, 1]																									|
																												|
*来源：力扣（LeetCode）																							|
*链接：https ://leetcode-cn.com/problems/two-sum																|
*著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。											|
---------------------------------------------------------------------------------------------------------------*/

/*	遍历方法暴力破解
*	执行用时：688 ms, 在所有 C++ 提交中击败了26.53%的用户
*	内存消耗：7.2 MB, 在所有 C++ 提交中击败了73.61%的用户
*/

#include <iostream>
#include <vector>

using namespace std;


vector<int> twoSum(vector<int> &nums, int target)
{
	vector<int> twoSum;
	int length = nums.size();

	for (int i = 0; i < length - 1; i++)
	{
		for (int j = i + 1; j < length; j++)
		{
			if (nums[i] + nums[j] == target)
			{
				twoSum.push_back(i);
				twoSum.push_back(j);

				return twoSum;
			}
		}
	}
	return twoSum;
}

void main()
{
	vector<int> nums = { 2, 7, 11, 15 };
	int target = 9;

	twoSum(nums, target);
}


