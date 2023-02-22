#include<string>
#include<iostream>
/*
    i/p -> my name is khan
    o/p -> my@40name@40is@40khan

    inshort replce ' ' -> @40
*/

using namespace std;
string replaceSpaces(string &str){
	string temp = "";
    
    for(int i=0; i<str.length(); i++) {
        if(str[i] == ' '){
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else
        {
            temp.push_back(str[i]);
        }
    }
    return temp;
}