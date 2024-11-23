//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int lenOfLongestSubarr(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        int ans = 0;
        
        vector<int> v(n);
        
        v[0] = arr[0];
        
        for (int i = 1; i < n; i++)
        {
            v[i] = v[i - 1] + arr[i];
        }
        
        map<int, int> mp;
        
        for (int i = 0; i < n; i++)
        {
            
            if (v[i] == k)
            {
                ans = max(ans, i + 1);
            }
            
            if (mp.find(v[i] - k) != mp.end())
            {
                ans = max(ans, i - mp[v[i] - k]);
            }
            
            if (mp.find(v[i]) == mp.end())
            {
                mp[v[i]] = i;
            }
        }
        return ans;

    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore newline character after t

    while (t--) {
        vector<int> arr;
        int k;
        string inputLine;

        getline(cin, inputLine); // Read the array input as a line
        stringstream ss(inputLine);
        int value;
        while (ss >> value) {
            arr.push_back(value);
        }

        cin >> k;
        cin.ignore(); // Ignore newline character after k input

        Solution solution;
        cout << solution.lenOfLongestSubarr(arr, k) << "\n";
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends