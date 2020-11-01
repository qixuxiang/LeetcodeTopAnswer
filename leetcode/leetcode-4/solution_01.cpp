/*
 * @lc app=leetcode.cn id=4 lang=cpp
 *
 * [4] 寻找两个正序数组的中位数
 */
// @lc code=start
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> vec;
        vec.insert(vec.begin(), nums1.begin(), nums1.end());
        vec.insert(vec.begin(), nums2.begin(), nums2.end());
        sort(vec.begin(), vec.end());
        int n = vec.size();
        if(n % 2)
        {
            return vec[(n + 1) / 2 - 1];
        }
        else
        {
            return (vec[n / 2 - 1] + vec[(n / 2)]) / 2.0;
            
        }
    }
};
// @lc code=end

