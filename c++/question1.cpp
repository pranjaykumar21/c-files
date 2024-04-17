#include<iostream>
using namespace std;
int main(){
    // int numl;
    // int p = 5, q = 1;
    // p += q -= p;   // right to left solve krna hai 
    // cout<<p<<" "<<q<<endl;
    // return 0;

    int i = 2, j = 3, k, l;
    float a,b;
    k = i / j * j;
    l = j / i * i;
    a = i / j * j ; // k waali value store hogi 
    b = j / i * i;  // l waali value store ho jayyegai
    cout<<k<<" "<<l<<" "<<a<<" "<<b;    
    
}


