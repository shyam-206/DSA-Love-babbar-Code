#include<iostream>
using namespace std;
/*
    pattern
    1 2 3
    4 5 6
    7 8 9

    if we increse one another count variable then its done
*/

int main()
{
    int n;
    cout << "Enter the Number = ";
    cin >> n;
    int cnt = 1;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout << cnt++ << " ";
        }
        cout << "\n";
    }
    return 0;
}