

/*

PROBLEM STATEMENT : 

Given an array with n objects colored red, white or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white and blue.

Here, we will use the integers 0, 1, and 2 to represent the color red, white, and blue respectively.

Note: You are not suppose to use the library's sort function for this problem.

Example:

Input: [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]


*/

class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int CountZeroes = 0;
        int CountOnes = 0;
        int CountTwo = 0;

        int i;
        for (i = 0; i < nums.size(); i++)
        {
            if (nums.at(i) == 0)
            {
                CountZeroes++;
            }

            if (nums.at(i) == 1)
            {
                CountOnes++;
            }

            if (nums.at(i) == 2)
            {
                CountTwo++;
            }
        }

        i = 0;

        while (CountZeroes > 0)
        {
            nums[i++] = 0;
            CountZeroes--;
        }

        while (CountOnes > 0)
        {
            nums[i++] = 1;
            CountOnes--;
        }

        while (CountTwo > 0)
        {
            nums[i++] = 2;
            CountTwo--;
        }
    }
};