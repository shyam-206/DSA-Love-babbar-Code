#include<iostream>
using namespace std;
/*
    pattern 
       *
      **
     ***
    ****

    row = 1 to n
    column = 1 to row
    space = n - row 

*/
int main()
{
    int n;
    cin >> n;

    for(int i=1;i<=n;i++){
        //for the space
        for(int space=1;space<=n-i;space++){
            cout << " ";
        }

        //for the print star
        for(int j=1;j<=i;j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}