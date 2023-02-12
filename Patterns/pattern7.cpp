#include<iostream>
using namespace std;
/*
    pattern
    1
    22
    333
    4444

    here n row and the column depend on the no of the row.
    print jitne row hai wo ho raha hai

*/
int main()
{
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << i;
        }
        cout << endl;
    }
    return 0;
}