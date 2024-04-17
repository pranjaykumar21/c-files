#include<iostream>
using namespace std;
int main (){
    
    // int x = 5;
    // cout<<++x<<endl;// pehle yeh x ki value increase krta hai fir uske baad print krta hai 
    // cout<<x;



    int a = 10;
    int b = a++;
    cout << b <<" ";   // b = 10 , a = 11
    b = ++a;                           // pre - increment
    cout << a;       // a = 12

    return 0;
}
