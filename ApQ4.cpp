//Q4.Display this AP - 4,7,10,13,16.. upto ‘n’ terms.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n : ";
    cin>>n;
    int x=4;
    for(int i=1;i<=n;i++){
        cout<<x<<" ";
        x+=3;
    }
}