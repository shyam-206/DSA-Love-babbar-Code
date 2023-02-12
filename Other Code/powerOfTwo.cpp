#include<limits.h>

class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        int ans = 1;
        
        for(int i = 0; i <= 30; i++) {
            
            //cout<<" ans "<<ans <<endl;
            if(ans == n)
            {
                return true;
            }
            if(ans < INT_MAX/2)
            ans = ans * 2;   
            
        }
        return false;
    }
};


/*using recursion

class Solution {
    public boolean isPowerOfTwo(int n) {
        if(n==0) return false;
        int ans = findPow(n);
        return ans==1;
    }
    public int findPow(int n){
        
        if(n==1) return 1;
        if(n%2!=0) return 0;
         return findPow(n/2);
    }
}

*/