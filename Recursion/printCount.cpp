#include<iostream>
using namespace std;

/*
    n = 5
    5 4 3 2 1
*/
void printCount(int n){

    if(n == 0)
        return;

    cout << n << " ";

    return printCount(n-1);
    
}
int main()
{
    int n;
    cin >> n;

    printCount(n);
    
    return 0;
}