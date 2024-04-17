#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter marks : ";
    cin>>marks;
    // if(marks>33) cout<<"pass";
    //else cout<<"Fail";
    // condition ? true : false 
    marks>33 ? cout<<"Pass" : cout<<"Fail";
}
