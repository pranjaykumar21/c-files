#include<iostream>
using namespace std;
int main(){

    int arr2d[2][3] = {
        {1,2,3},
        {4,5,6}
    };
    for (int i = 1; i <= 6; i++)
    {
        for (int j = 1; j <= 6; j++)
        {
            cout<<"The value at"<<i<<","<<j<<" is  "<<arr2d[i][j]<<endl;
        }
        
    }
}






