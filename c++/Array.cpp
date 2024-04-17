#include<iostream>
using namespace std;
int main(){

    int arr[3] = {1, 3, 6};
  //Array Index   0  1  2 

    //cout<<arr[0];

    int marks[6];

    for (int i = 0; i < 6; i++)
    {
        cout<<"Enter the marks of "<<i<<"th student"<<endl;
        cin>>marks[i];

    }

    for (int i = 0; i < 6; i++)
    {
        cout<<"marks of "<<i<<"th student is"<<marks[i]<<endl;
    }

}


// array is the collection of the same type of collection of data type  
