#include<iostream>
#include<vector>

/*
    three cases exist
    array -> 3 4 5 1 2

    case 1 = sorted -> 1 2 3 4 5 one pair exist nums[i-1] > nums[i]
    case 2 = rotate -> 3 4 5 1 2 one pair exist
    case 3 = non above -> 3 5 2 1 4 two pair exist
    case 4 = same ->1 1 1  then zero pair exist

    for true if count is less than equal one

*/

class Solution {
public:
    bool check(vector<int>& nums) {
        int cnt = 0;
        for(int i=1;i<nums.size();i++) 
        {
            if(nums[i] < nums[i-1])
                cnt++;
        }
        if(nums[nums.size()-1] > nums[0])
            cnt++;
        
        return cnt<=1;
    }
};

using namespace std;
int main()
{
    return 0;
}