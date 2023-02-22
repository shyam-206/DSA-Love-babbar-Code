#include<iostream>
#include<vector>
using namespace std;

void reverseWords(string s){
    vector<string> temp;
    string str = "";

    for(int i=0;i<s.length();i++){
        if(s[i] == ' '){
            temp.push_back(str);
            str = "";
        }
        else{
            str += s[i];
        }

    }

    temp.push_back(str);
}
int main()
{
    return 0;
}