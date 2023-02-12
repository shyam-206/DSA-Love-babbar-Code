#include<iostream>
using namespace std;

bool isEven(int num){
    if(num%2 == 0)
        return true;
    else
        return false;
}

int main()
{
    int num;
    cin >> num;

    if(isEven(num)){
        cout << "Number is Even" << endl;
    }
    else{
        cout << "Number is Odd" << endl;
    }
    
    return 0;
}