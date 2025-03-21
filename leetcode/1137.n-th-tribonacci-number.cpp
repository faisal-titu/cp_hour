/*
 * @lc app=leetcode id=1137 lang=cpp
 *
 * [1137] N-th Tribonacci Number
 */

// @lc code=start
class Solution {
public:
    int tribonacci(int n) {
        int dp[40];

        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 1;

        for(int i=3;i<=n;i++)
            dp[i] = dp[i-1] + dp[1-2] + dp[i-3];
        
        return dp[n];
    }
};
// @lc code=end

