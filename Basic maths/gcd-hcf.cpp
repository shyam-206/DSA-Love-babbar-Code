//HCF ==> Highest Common Factor
//GCD => Greatest Common Factor

//for gcd(a,b) = gcd(a-b,b)
//               gcd(a%b,b)

#include<iostream>
using namespace std;

int gcd(int a,int b){

    if(a==0){
        return b;
    }

    while(a != b){
        if(a>b)
            a = a-b;
        else
            b = b-a;
    }

    return a;
}
int main()
{
    return 0;
}