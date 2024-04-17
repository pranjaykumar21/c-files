#include <iostream>
using namespace std;
int main()
{
    // integer data type
    int apples = 5;
    cout << apples << endl;
    cout << "size of int:" << sizeof(apples) << endl;

    // char datatype
    int sign = '&';
    cout << sign << endl;
    cout << "size of char:" << sizeof(sign) << endl;

    // bool datatype
    bool flag = true;
    cout << flag << endl;
    cout << "size of bool:" << sizeof(flag) << endl;

    // float datatype
    float score = 3.14;
    cout << score << endl;
    cout << "size of float:" << sizeof(score) << endl;

    return 0;
}
