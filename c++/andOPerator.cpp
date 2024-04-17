#include<iostream>
#include<string>
using namespace std;
int main  (){

    int  num;
    cin>>num;

    if((num%2==0) && (num%3==0)) {    // logical and operator
        cout<<num<<endl;
    }

    return 0;
}