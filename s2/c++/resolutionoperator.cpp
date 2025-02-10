#include <iostream>
using namespace std;

class Operate {
public:
    // Declaration of the member function
    void fun();
};

// Define the member function outside the class
void Operate::fun() {  /* return_type Class_Name::function_name */
    cout << "It is the member function of the class.";
}

int main() {
    // Create an object of the class Operate
    Operate op;
    op.fun();
    
    return 0;
}
