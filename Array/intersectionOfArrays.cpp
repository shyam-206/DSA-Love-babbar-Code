#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> s;

        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());

        // for(int i=0;i<nums1.size();i++){
        //     int ele = nums1[i];

        //     for(int j=0;j<nums2.size();i++){
        //         if(ele == nums2[j]){
        //             ans.push_back(ele);
        //             nums2[j] = -2;
        //             break;
        //         }
        //     }
        // }

        int i=0,j=0;

        while(i<nums1.size() && j<nums2.size()){

            if(nums1[i] == nums2[j]){
                s.insert(nums2[j]);
                i++;
                j++;
            }
            else if(nums1[i] < nums2[j]) i++;

            else j++;
        }
        vector<int> ans;
        for(auto& i : s) ans.push_back(i);
        return ans;
    }
};