#include<iostream>
using namespace std;

int main(){

   int num1, num2;
   cin>>num1>>num2;

   cout<<"Value of num1: "<<num1<<endl;
   cout<<"value of num2: "<<num2<<endl;
     
    int temp;  // temporary operator
    temp = num1;
    num1 = num2;
    num2 = temp;

    cout<<"value of num1: "<<num1<<endl;
    cout<<"value of num2: "<<num2<<endl;

    return 0;      
}
