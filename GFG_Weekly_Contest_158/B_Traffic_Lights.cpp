// Link - https://practice.geeksforgeeks.org/contest/gfg-weekly-158-rated-contest/problems
// Traffic Lights

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string trafficLights(int n, int q, vector<vector<int>> &queries) {
        string traffic(n, 'R');

        vector<int> diff(n + 1, 0);

        for (const auto& query : queries) {
            int start = query[0] - 1;
            int end = query[1];

            diff[start]++;
            if (end < n) {
                diff[end]--;
            }
        }

        int update_count = 0;
        for (int i = 0; i < n; ++i) {
            update_count += diff[i];
            int current_stage = update_count % 3;
            switch (current_stage) {
                case 0:
                    traffic[i] = 'R';
                    break;
                case 1:
                    traffic[i] = 'Y';
                    break;
                case 2:
                    traffic[i] = 'G';
                    break;
            }
        }

        return traffic;
        
        
        
        // code here
        // string traffic(n, 'R');
        // for (int i = 0; i < q; i++) {
        //     for (int j = queries[i][0] - 1; j < queries[i][1]; j++) {
        //         switch (traffic[j]) {
        //             case 'R' :
        //                 traffic[j] = 'Y';
        //                 break;
        //             case 'Y' :
        //                 traffic[j] = 'G';
        //                 break;
        //             case 'G' :
        //                 traffic[j] = 'R';
        //                 break;
        //             default :
        //                 break;
        //         }
        //     }
        // }
        // return traffic;
    }
};
