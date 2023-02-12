#include<iostream>
using namespace std;
int fact(int n){
    
    //base case
    if(n==0)
        return 1;

    int smallProblem = fact(n-1);
    int biggerProblem = n * smallProblem; 

    return biggerProblem;
}
int main()
{
    long int n;
    cin >> n;

    cout << "Factorial of " << n << " is = " << fact(n) << endl;

    return 0;
}