#include<iostream>
#include<vector>

using namespace std;
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(k > nums.size()){
            k = k % nums.size();
        }
        
        int n = nums.size();
        vector<int> temp(n);

        for(int i=0;i<n;i++){
            temp[(i+k)%n] = nums[i];
        }

        nums = temp;
    }
};

int main()
{
    return 0;
}