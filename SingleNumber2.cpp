/*

PROBLEM STATEMENT : 

Given a non-empty array of integers, every element appears three times except for one, which appears exactly once. Find that single one.

Note:

Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?

Example 1:

Input: [2,2,3,2]
Output: 3
Example 2:

Input: [0,1,0,1,0,1,99]
Output: 99

*/

//APPROACH 1 : Using Extra O(N) Space Using a HashTable
class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        //We Do not have to utilise any Extra Memory While Solving this Problem :
        //The Vector is not Empty in any Case.
        map<int, int> hash;

        for (int i = 0; i < nums.size(); i++)
        {
            hash[nums[i]]++;
        }
        int uniqueNum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (hash[nums[i]] == 1)
            {
                uniqueNum = nums.at(i);
            }
        }

        return uniqueNum;
    }
};
