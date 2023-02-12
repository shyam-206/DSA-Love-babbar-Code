#include<iostream>
using namespace std;

void reachHome(int src,int dest){

    cout << "Source " << src << " Destination " << dest << endl;
    // Base case
    if(src == dest){
        cout << "poch gaya" << endl;
        return;
    }

    //processing -> ek step aage badhjao
    src = src + 1;


    //recursive call
    reachHome(src,dest);

}
int main()
{
    int src = 1;
    int dest = 5;

    reachHome(src,dest);

    return 0;
}