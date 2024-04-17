#include<iostream>
using namespace std;
int main (){

    int n1,n2;
    cout<<"Enter 2 integers";
    cin>>n1>>n2;

    cout<<"Enter an operator(+,-,*,/,%): ";
    char opt;
    cin>>opt;
     
    switch (opt){

        case '+':
        cout<<"sum is : "<<n1+n2<<endl;
        break;

       case '-':
        cout<<"subtraction is : "<<n1-n2<<endl;
        break;

         case '*':
        cout<<"product is : "<<n1*n2<<endl;
        break;  

         case '/':
        cout<<" division is : "<<n1/n2<<endl;
        break;

         case '%':
        cout<<"remainder is : "<<n1%n2<<endl;
        break;

        default:
        cout<<"Enter a valid operator"<<endl;
        break;

    } 

}