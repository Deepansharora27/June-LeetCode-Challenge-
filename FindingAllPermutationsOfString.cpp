#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

//Our Function to Calculate All the N Factorial Permutations Of A Given String

void permutation(char *a, int l, int r)
{
    //Base Case For the Problem :
    int i;
    if (l == r)
    {
        //It means we have reached at the end of the State Space Tree , and we can finally print the given string:
        cout << a << endl;
    }
    else
    {

        for (i = l; i <= r; i++)
        {
            //At The First Iteration , char A is Swapped With A Itself
            swap(a[l], a[i]);
            permutation(a, l + 1, r); //Recursively Calling for the Left Over Substring
            swap(a[l], a[i]);         //Backtracking for Reaching to the Original Configuration Again
        }
    }
}

int main()
{
    char str[] = "ABC";
    permutation(str, 0, 2);
}
