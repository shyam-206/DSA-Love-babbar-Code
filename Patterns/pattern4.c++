#include<iostream>
using namespace std;
/*
    pattern
    4 3 2 1
    4 3 2 1
    4 3 2 1
    4 3 2 1
    relation of column is equal to j (1 to n)
    cout << n-j+1


*/

int main()
{
    int n;
    cout << "Enter the Number = ";
    cin >> n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout << n-j+1 << " ";
        }
        cout << "\n";
    }
    return 0;
}