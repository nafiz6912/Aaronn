#include <iostream>
#include <string>

using namespace std;

class person {
    public :
    string name;
    int age;
    int rollno;
   int marks(int a,int b){
    return a+b;
}

   

  
    void introduce() {
        cout << "Hi, my name is " << name << " and I am " << age << " years old." << endl;
    }
};
int main(){
    person p1;
    p1.name="aaron";
    p1.age=10;

    p1.introduce();
    return 0;
}

