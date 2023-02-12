#include<iostream>
using namespace std;
/*
    pattern 
    A B C
    A B C
    A B C

    here no fo row = n
    no of column = n
    print is depend on the 'A' + col - 1

*/
int main()
{
    int n;
    cin >> n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            char ch = 'A'+j-1;
            cout << ch;
        }
        cout << endl;
    }
    return 0;
}