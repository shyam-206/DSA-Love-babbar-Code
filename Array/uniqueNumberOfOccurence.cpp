#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) 
    {
        unordered_map<int,int> mp;

        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;

        }

        unordered_set<int> unique;

        for(auto& c : mp) unique.insert(c.second);

        return mp.size() == unique.size();
        
    }
};