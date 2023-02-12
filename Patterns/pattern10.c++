#include<iostream>
using namespace std;
/*
    pattern 
    A A A
    B B B 
    C C C

    here no fo row = n
    no of column = n
    print is depend on the 'A'+row - 1

*/
int main()
{
    int n;
    cin >> n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            char ch = 'A'+i-1;
            cout << ch;
        }
        cout << endl;
    }
    return 0;
}