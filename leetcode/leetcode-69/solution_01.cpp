/*
 * @lc app=leetcode.cn id=69 lang=cpp
 *
 * [69] x 的平方根
 */

// @lc code=start
class Solution {
public:
    int mySqrt(int x) {
        int lower = 1;
        int upper = x;
        while(lower <= upper)
        {
            long mid = lower + ((upper - lower) >> 1);
            if(mid * mid < x)
            {
                lower = int(mid + 1);
            }
            else if(mid * mid == x)
            {
                return int(mid);
            }
            else
            {
                upper = int(mid - 1);

            }
            
        } 
        return upper;
        
    }
};
// @lc code=end
