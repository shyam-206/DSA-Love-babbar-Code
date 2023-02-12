//g++ file_name -o exe_name
// .\exe_name
#include<iostream>
using namespace std;
/*
    pattern 
    ****
    ****
    ****
    ****
*/
int main()
{
    int n;
    cout << "Enter Number of n = ";
    cin >> n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout << "*";
        }
        cout << endl;
    }
     return 0;
}