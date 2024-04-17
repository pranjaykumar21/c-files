#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter 1st Number : ";
    cin>>a;
    cout<<"Enter 2nd Number : ";
    cin>>b;
    cout<<"Enter 3rd Number : ";
    cin>>c;

    if(a>=b && a>=c){
        cout<<a<<" is greatest";
    }

        if(b>=a && b>=c){
        cout<<b<<" is greatest";
    }
    
        if(c>=b && c>=a){
        cout<<c<<" is greatest";

    }
    
}



