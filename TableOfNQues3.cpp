//Q:-3.Print the table of ‘n’. Here ‘n’ is an integer which the user will input.
#include<iostream>
using namespace std;
int n;
int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    for(int i=1;i<=n*10;i++){
        if(i%n==0) cout<<i<<" ";
    }
    
}