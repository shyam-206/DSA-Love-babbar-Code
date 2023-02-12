#include<iostream>
using namespace std;
/*
    pattern
    1 2 3 4
    1 2 3 4
    1 2 3 4
    1 2 3 4
    relation of column is equal to j (1 to n)


*/

int main()
{
    int n;
    cout << "Enter the Number = ";
    cin >> n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout << j << " ";
        }
        cout << "\n";
    }
    return 0;
}