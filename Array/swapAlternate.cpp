#include<iostream>
#include<bits/stdc++.h>

using namespace std;
void swapAlternate(int arr[],int n){
    for(int i=0;i<n;i+=2){

        if(i+1 < n){
            swap(arr[i],arr[i+1]);
        }
    }
}

int main()
{
    int arr[6] = {1,2,3,4,5,6};

    swapAlternate(arr,6);

    for(int i=0;i<6;i++){
        cout << arr[i] << " ";
    }

    return 0;
}