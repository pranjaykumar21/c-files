#include<iostream>
using namespace std;
int main(){
    int cp;
    cout<<"enter the cost price : ";
    cin>>cp;
    int sp;
    cout<<"enter the selling price : ";
    cin>>sp;


    if(sp>cp){ // for profit
        cout<<"profit";
    }

    if(cp>sp){  // for loss 
        cout<<"loss";
    }
    
    if(cp==sp){ // for no profit or no loss
        cout<<"No profit no Loss!";
    }
}

