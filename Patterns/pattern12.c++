#include<iostream>
using namespace std;
/*
    pattern 
    A B C
    B C D 
    C D E

    here no fo row = n
    no of column = n
    print is depend on the 'A'+i+j-2
    more understand on detail of note 

*/
int main()
{
    int n;
    cin >> n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            char ch = 'A'+i+j-2;
            cout << ch;
        }
        cout << endl;
    }
    return 0;
}