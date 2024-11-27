/*PROBLEM STATEMENT:https:www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/second-largest3735
CODE:*/
//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr)
    {
        int max = 0;
        for (int i; i <= arr.size() - 1; i++)
        {
            if (arr[i] > max)
            {
                max = arr[i];
            }
        }
        int sec_max = -1;
        for (int j; j <= arr.size() - 1; j++)
        {
            if (arr[j] != max && arr[j] > sec_max)
            {
                sec_max = arr[j];
            }
        }
        return sec_max;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number)
        {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.getSecondLargest(arr);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends