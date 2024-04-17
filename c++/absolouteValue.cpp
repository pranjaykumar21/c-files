#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a number : "; // cout- character output
    cin>>x;
    if(x<0){
        x = x*-1;   // x *= -1
    }
    cout<<x;
}


