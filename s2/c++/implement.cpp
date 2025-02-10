#include <iostream>
using namespace std;


class MyClass {
public:
   
    int myInt;
    float myFloat;
    char myChar;

    
    void display();
};


void MyClass::display() {
    cout << "Values are: " << myInt << ", " << myFloat << ", " << myChar << endl;
}

int main() {
   
    MyClass obj;

    
    obj.myInt = 10;
    obj.myFloat = 3.14;
    obj.myChar = 'A';

   
    obj.display();

    return 0;
}