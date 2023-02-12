#include<iostream>
using namespace std;

int countStair(int n){
    
    //base condition
    if(n < 0)
        return 0;
    
    if(n == 0)
        return 1;

    int ans = countStair(n-1) + countStair(n-2);
    return ans;
}

int main()
{
    int number;
    cin >> number;

    cout << "Total No. Of Step = " << countStair(number) << endl;
    return 0;
}