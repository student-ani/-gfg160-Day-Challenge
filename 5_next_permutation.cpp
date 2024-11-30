/*Problem Statement:https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/next-permutation5226
Code:*/
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    void nextPermutation(vector<int>& arr) {
        // code here
        int n = arr.size();
        int next_index=-1;
        for(int i=n-1; i>0;i--){
            if(arr[i-1]<arr[i]){
                next_index=i-1;
                break;
            }
        }
        if(next_index!=-1){
            int swap_index=next_index;
            for(int j=n-1;j>=0;j--){
                if(arr[j]>arr[next_index]){
                    swap_index=j;
                    break;
                }
            }
            swap(arr[next_index],arr[swap_index]);
        }
        reverse(arr.begin()+next_index+1,arr.end());
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
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int n = arr.size();
        ob.nextPermutation(arr);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends