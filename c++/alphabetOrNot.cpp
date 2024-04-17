#include<iostream>   
using namespace std;
int main(){
    char ch;
    cout<<"Enter a charactrer : ";  // write a program t check whether a character is  an alphabet or not
    cin>>ch;
    int x = (int)ch;
    if(x>=65 && x<90 || x>=97 && x<=122){
        cout<<"Alphabet";
    }
    else{
        cout<<"Not a Alphabet";
    }
}




  