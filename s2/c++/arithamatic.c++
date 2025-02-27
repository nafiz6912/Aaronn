#include <iostream>
#include <string>

using namespace std;

int main(){
    char operation;
    double num1,num2,reslut;


    cout << "arithmatic calculator  " ;
    cout <<"----------";

    cout<< "enter the operations(+,_,/,*)";
    cin>> operation;

    cout << "enter the numbers ";
    cin >> num1 >>num2;

    switch (operation)
    {
    case '+':
        cout <<num1 <<"+" <<num2 <<"="<<num1+num2;
        break;
    case '-':
        cout <<num1 <<"-" <<num2 <<"="<<num1-num2;
        break;
        case '*':
        cout <<num1 <<"*" <<num2 <<"="<<num1*num2;
        break;
        case '/':
        cout <<num1 <<"/" <<num2 <<"="<<num1/num2;
        break;
    default:
    cout <<"error invalid operation";
        break;
    }
}

