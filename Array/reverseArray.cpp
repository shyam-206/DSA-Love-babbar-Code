#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse1(vector<int> v){

    int s=0;
    int e = v.size()-1;
    while(s<=e){
        swap(v[s],v[e]);
        s++;
        e--;
    }

    return v;
}

vector<int> reverse2(vector<int> v){

    int i=0;
    while(i!=v.size()/2){
        swap(v[i],v[v.size()-i-1]);
        i++;
    }

    return v;
}

void print(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v;

    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(8);
    v.push_back(10);

    vector<int> ans = reverse2(v);

    cout << "Printing Reverse Array" << endl;  
    print(ans);

    return 0;
}