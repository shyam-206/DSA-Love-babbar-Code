#include<iostream>
using namespace std;

bool check(string str,int i,int j){

    //base case
    if(i>j)
        return false;

    if(str[i] != str[j])
        return false;
    else
        return check(str,i+1,j-1);

}
int main()
{
    string name = "abcde";

    bool isPalindrome = check(name,0,name.length()-1);

    if(isPalindrome){
        cout << "Its a palindcrome" << endl;
    }
    else{
        cout << "Its not a palindrome" << endl;
    }

    return 0;
}