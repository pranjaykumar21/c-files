#include<iostream>
#include<string>
using namespace std;
int main  (){

    int marks;
    cout<<"Enter  a marks : ";
    cin>>marks;

    if(marks>33){
        if(marks>80){
        cout<<"Gracefully";
    }
    else{
        cout<<"pass";
    }
    }
    else{
        cout<<"Fail";
    }
}
