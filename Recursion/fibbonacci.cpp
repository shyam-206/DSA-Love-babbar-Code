#include<iostream>
using namespace std;

int fib(int n){

    //base case
    if(n == 0 || n == 1)
        return n;

    // recursive call
    int first = fib(n-1);
    int second = fib(n-2);

    return first + second;
}
int main()
{
    int n;
    cin >> n;

    cout << "Fibbonacci of " << n << " is = " << fib(n) << endl;
    return 0;
}