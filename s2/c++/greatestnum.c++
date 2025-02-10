#include <iostream>
using namespace std;

int main() {
    
    double num1,num2,num3;

 
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3 ;

  
    if (num1 >= num2) {
        if (num1 >= num3) {
            cout  << " is the largest number." <<num1 <<endl ;
        } else {
            cout << " is the largest number." <<num3 << endl;
        }
    }
     else {
        if (num2 >= num3) {
            cout << num2 << " is the largest number."<< endl;
        } else {
            cout << num3 << " is the largest number." ;
        }
    }

    return 0;
}
