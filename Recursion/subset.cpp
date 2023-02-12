#include<iostream>
#include<vector>
using namespace std;

void solve(vector<int> num,int ind,vector<int> output,vector<vector<int>> ans){

    //base case
    if(ind >= num.size()){
        ans.push_back(output);
    }

    //if we did not pick the element
    solve(num,ind+1,output,ans);

    //if pick the element
    int ele = num[ind];
    output.push_back(ele);
    solve(num,ind+1,output,ans);


}