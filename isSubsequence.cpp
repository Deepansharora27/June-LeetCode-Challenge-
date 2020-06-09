/*

PROBLEM STATEMENT : 

Given a string s and a string t, check if s is subsequence of t.

A subsequence of a string is a new string which is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (ie, "ace" is a subsequence of "abcde" while "aec" is not).

Follow up:
If there are lots of incoming S, say S1, S2, ... , Sk where k >= 1B, and you want to check one by one to see if T has its subsequence. In this scenario, how would you change your code?

Example 1:

Input: s = "abc", t = "ahbgdc"
Output: true
Example 2:

Input: s = "axc", t = "ahbgdc"
Output: false

*/

//Approach 1 : Recursive Approach :
class Solution
{
public:
    bool isSubsequence(string s, string t)
    {
        //Recursive Approach :
        if (s.length() == 0)
            return true;
        if (t.length() == 0)
            return false;

        if (t[0] == s[0])
            return isSubsequence(s.substr(1), t.substr(1));
        return isSubsequence(s, t.substr(1));
    }
};

//Aproach 2 : Iterative Approach :
//Using the Two Pointer Approach
class Solution
{
public:
    bool isSubsequence(string s, string t)
    {
        //Means we have nothing to look for in the String T
        if (s.length() == 0)
            return true;
        //Means we do not have a string to find subsequences ,
        //so we will directly return false to the function
        if (t.length() == 0)
            return false;

        int s_pointer = 0;
        for (int i = 0; i < t.length(); i++)
        {
            if (t[i] == s[s_pointer])
                s_pointer++;
            if (s_pointer == s.length())
                return true;
        }

        return s_pointer == s.length();
    }
};
