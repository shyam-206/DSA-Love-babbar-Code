#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s2.size()<s1.size())
            return false;
        unordered_map<char, int> mp1, mp2;
        for(char c:s1)
            mp1[c]++;
        int n=s1.size();
        for(int i=0;i<=s2.size()-n;i++)
        {
            for(int j=i;j<i+n;j++)
                mp2[s2[j]]++;
            if(mp1==mp2)
                return true;
            mp2.clear();
        }
        return false;
    }
};
int main()
{
    return 0;
}