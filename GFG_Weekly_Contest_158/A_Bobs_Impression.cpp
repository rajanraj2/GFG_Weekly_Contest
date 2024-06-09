// Link - https://practice.geeksforgeeks.org/contest/gfg-weekly-158-rated-contest/problems
// Bob's Impression


#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool classArrangement(int n, vector<int> &arr) {
        // code here 
        int count = 0;
        bool same = false;
        vector<int> arr2 = arr;
        sort(arr2.begin(), arr2.end());
        for (int i = 0; i < n; i++) {
            if (arr[i] != arr2[i]) {
                count++;
            }
            if (i < n - 1) {
                if (arr2[i] == arr2[i + 1]) {
                    same = true;
                } 
            }
        }
        if (count == 2) {
            return true;
        }
        else if (count == 0 & same == true) {
            return true;
        }
        else {
            return false;
        }
    }
};