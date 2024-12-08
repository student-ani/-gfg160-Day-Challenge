/*Problem Statement:https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/max-circular-subarray-sum-1587115620
Code:*/
//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // arr: input array
    // Function to find maximum circular subarray sum.
    int circularSubarraySum(vector<int> &arr) {

        // your code here
        int n=arr.size();
        int max_straight=INT_MIN;
        int min_straight=INT_MAX;
        int arr_sum=0;
        int temp_max=0;
        int temp_min=0;
        for(int i=0; i<n;i++){
            arr_sum+=arr[i];
            temp_max+=arr[i];
            max_straight=max(max_straight,temp_max);
            temp_max=max(temp_max,0);
            
            temp_min+=arr[i];
            min_straight=min(min_straight,temp_min);
            temp_min=min(temp_min,0);
        }
        if(arr_sum==min_straight)
           return max_straight;
        
        return max(max_straight,arr_sum-min_straight);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.circularSubarraySum(arr);

        cout << res << endl;
    }
    return 0;
}

// } Driver Code Ends