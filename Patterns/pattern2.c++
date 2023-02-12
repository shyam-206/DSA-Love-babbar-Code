#include<iostream>
using namespace std;
/*
    pattern 
    1 1 1 1
    2 2 2 2
    3 3 3 3
    4 4 4 4

    relation between the column is here row = i
*/
int main()
{
    int n;
    cout << "Enter a Number = ";
    cin >> n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout << i << " ";
        }

        cout << endl;
    }
    return 0;
}