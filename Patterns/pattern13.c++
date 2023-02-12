#include<iostream>
using namespace std;
/*
    pattern 
    A 
    B B 
    C C C

    here no fo row = n
    no of column = row
    print is depend on the 'A'+row-1

    A 
    B C
    C D E

    row 1 to n
    column 1 to row
    print formula is 'A'+row+column-2

*/
int main()
{
    int n;
    cin >> n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            char ch = 'A'+i-1;
            cout << ch;
        }
        cout << endl;
    }
    return 0;
}