#include <iostream>
#include <string>

using namespace std;

class person {
    public :
    string name;
    int age;


   

  
    void introduce() {
        cout << "Hi, my name is " << name << " and I am " << age << " years old." << endl;
    }
};
int main(){
    person p1;
    p1.name="musavir";
    p1.age=20;
    p1.introduce();
    return 0;
}

