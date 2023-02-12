#include<iostream>
using namespace std;
/*
    pattern
    D
    C D
    B C D
    A B C D

    row = 1 to n
    column = 1 to row
    formula start letter = 'A'+ n - row find and then increase with one.

*/
int main()
{
    int n;
    cin >> n;

    for(int i=1;i<=n;i++){
        char start = 'A' + n - i;
        for(int j=1;j<=i;j++){
            cout << start;
            start += 1;
        }
        cout << endl;
    }
    return 0;
}