class Solution
{
public:
    int uniquePathsDFS(int x, int y, vector<vector<int>> &dp)
    {
        //If We Are at Last Row , Or Last Column We Can only Go Down and Right Respectively:
        //(x,y) Tuple Represents the Current Coordinate at Where we are in the 2D Grid.
        if (x == dp.size() - 1 || y == dp.front().size() - 1)
            return 1;

        //If We Have Already , computed the Subproblem then just return the result:
        if (dp[x][y] != 0)
            return dp[x][y];

        //Otherwise, Making the Recursive Calls:
        int res = uniquePathsDFS(x + 1, y, dp) + uniquePathsDFS(x, y + 1, dp);

        dp[x][y] = res; //Caching the Result in the DP
        return res;
    }

    int uniquePaths(int m, int n)
    {
        vector<vector<int>> dp(n, vector<int>(m));

        return uniquePathsDFS(0, 0, dp);
    }
};