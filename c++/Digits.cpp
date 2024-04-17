#include<iostream>
using namespace std;
int main(){                // it explain about the no. of digits    like 4567==  in this 4 digit comes

    int n;
    cin>>n;  //610

    int digits=0;
    while(n>0){
        digits++;   //3
        n=n/10;    //0
    }
    cout<<digits<<endl;

    return 0;
}
