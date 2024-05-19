//Q5.Display this GP - 3,12,48,.. upto ‘n’ terms.
#include<iostream>
using namespace std;
int n;
int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    int gp=3;
    for(int i=1;i<=n;i++){
        cout<<gp<<" ";
        gp=gp*4;
    }
}