
/*

PROBLEM STATEMENT : 

Given n, how many structurally unique BST's (binary search trees) that store values 1 ... n?

Example:

Input: 3
Output: 5
Explanation:
Given n = 3, there are a total of 5 unique BST's:

   1         3     3      2      1
    \       /     /      / \      \
     3     2     1      1   3      2
    /     /       \                 \
   2     1         2                 3

*/

class Solution
{
public:
    int dpNumTrees(int n, map<int, int> &dp)
    {
        if (n == 0 || n == 1)
        {
            dp[0] = 1;
            dp[1] = 1;
            return 1;
        }

        if (dp.find(n) != dp.end())
        {
            return dp[n];
        }

        int count = 0;
        for (int i = 1; i <= n; i++)
        {
            count += dpNumTrees(i - 1, dp) * dpNumTrees(n - i, dp);
        }

        dp[n] = count;
        return count;
    }

    int numTrees(int n)
    {
        map<int, int> hash;
        return dpNumTrees(n, hash);
    };
};