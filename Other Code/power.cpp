#include<iostream>
using namespace std;

int power(int n1,int n2){
    int temp = 1;

    for(int i=1;i<=n2;i++){
        temp *= n1;
    }

    return temp;
}
int main()
{
    int a,b;
    cin >> a >> b;

    int ans = power(a,b);

    return 0;
}