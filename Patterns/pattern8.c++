#include<iostream>
using namespace std;
/*
    pattern
    1 
    2 3
    4 5 6

    here total no of row = n
    total no of column depend on row 
    and the print statement id just increse the cnt in all time

*/
int main()
{
    int n;
    cin >> n;
    int cnt = 1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << cnt++ << " ";
        }
        cout << endl;
    }
    return 0;
}