/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> num_map; //键值为nums的值，变量值为nums下标
        vector<int> res;
        for(int i = 0; i < nums.size(); i++)
        {
            int v = target - nums[i];
            if(num_map.count(v)) // 找得到
            {
                res.push_back(num_map[v]);
                res.push_back(i);
                break;
            }

            num_map[nums[i]] = i;

        }
        return res;
    }
};
// @lc code=end
