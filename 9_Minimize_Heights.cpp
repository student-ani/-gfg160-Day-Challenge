/*Problem Statement:https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/minimize-the-heights3351
Code:*/
//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int getMinDiff(vector<int> &arr, int k) {
        // code here
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int lar=arr[n-1];
        int srt=arr[0];
        
        int result = lar-srt;
        for(int i=1; i<n; i++)
        {
            lar=max(arr[n-1]-k, arr[i-1]+k);
            srt = min(arr[i]-k, arr[0]+k);
            if(srt<0){
                continue;
            }
            result=min(result,lar-srt);
        }
        return result;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, k;
        cin >> k;
        cin.ignore();
        vector<int> a, b, c, d;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution ob;
        auto ans = ob.getMinDiff(a, k);
        cout << ans << "\n";
        cout << '~' << endl;
    }
    return 0;
}
// } Driver Code Ends