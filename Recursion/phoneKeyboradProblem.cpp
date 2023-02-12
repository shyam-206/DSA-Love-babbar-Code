#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    void solve(string digits,int ind,string output,vector<string>& ans,string map[]){

        //base case
        if(ind >= digits.length()){
            ans.push_back(output);
            return;
        }

        int num = digits[ind] -'0';
        string value = map[num];

        for(int i=0;i<value.length();i++){
            output.push_back(value[i]);
            solve(digits,ind+1,output,ans,map);
            output.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {

        vector<string> ans;
        if(digits.length() == 0){
            return ans;
        }
        string output = "";
        int ind = 0;
        string map[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

        solve(digits,ind,output,ans,map);
        return ans;
        
    }
};